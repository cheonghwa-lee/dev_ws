from torcs_interfaces.msg import TORCSSensors, TORCSCtrl
from geometry_msgs.msg import TwistStamped, PoseStamped, Vector3Stamped, TransformStamped, Quaternion, Transform, Vector3
from std_msgs.msg import Bool, String, Header, Float32, Int32
from sensor_msgs.msg import LaserScan
from rclpy.node import Node
import tf2_ros
import socket
import sys
import math

from .simple_parser import SimpleParser

class TORCSClient(Node):
    class Config:
        def __init__(self):
            self.host_name = "localhost"
            self.server_port = 3001
            self.id = "SCR"
            self.max_episodes = 0
            self.max_steps = 0
            self.track_name = "unknown"
            self.stage = 3
            self.num_opponents_ranges = 36
            self.num_track_ranges = 19
            self.num_focus_ranges = 5
            self.loop_rate = 100.0

    def __init__(self):
        super().__init__("torcs_client")
        
        self.config = self.Config()
        self.getParams()
        self.hostInfo = socket.gethostbyname(self.config.host_name)
        if(self.hostInfo == None):
            self.get_logger().info("problem interpreting host: {}".format(self.config.host_name))
            sys.exit()

        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

        self.shutdownClient = False
        self.curEpisode = 0
        self.currentStep = 0
        self.numRead = 0
        self.torcs_ctrl = TORCSCtrl()
        self.torcs_sensors = TORCSSensors()
        self.speed = TwistStamped()
        self.globalSpeed = TwistStamped()
        self.globalPose = PoseStamped()
        self.globalRPY = Vector3Stamped()
        self.restart = Bool()

        self.torcs_sensors.wheel_spin_vel = [0.0] * 4

        self.focus_array = [0.0] * self.config.num_focus_ranges
        self.focus = self.initRangeFinder("base_link", 0-2*math.pi/360, 0+2*math.pi/360, 0.0, 200.0, 5)
        self.track_array = [0.0] * self.config.num_track_ranges
        self.track = self.initRangeFinder("base_link", -math.pi/2, math.pi/2, 0.0, 200.0, 19)
        self.opponents_array = [0.0] * self.config.num_opponents_ranges
        self.opponents = self.initRangeFinder("base_link", -math.pi, 0.99*math.pi, 0.0, 200.0, 36)

        self.debug_string = String()
        self.steering_command_sub = self.create_subscription(Float32, "steering_command", self.sc_callback, 1)
        self.accel_command_sub = self.create_subscription(Float32, "accel_command", self.ac_callback, 1)
        self.brake_command_sub = self.create_subscription(Float32, "brake_command", self.bc_callback, 1)
        self.gear_command_sub = self.create_subscription(Int32, "gear_command", self.gc_callback, 1)
        self.ctrl_sub = self.create_subscription(TORCSCtrl, "torcs_ctrl_in", self.ctrlCallback, 1)
        self.ctrl_pub = self.create_publisher(TORCSCtrl, "torcs_ctrl_out", 1)
        self.torcs_sensors_pub = self.create_publisher(TORCSSensors, "torcs_sensors_out", 1)
        self.globalSpeed_pub = self.create_publisher(TwistStamped, "torcs_global_speed", 1)
        self.globalPose_pub = self.create_publisher(PoseStamped, "torcs_global_pose", 1)
        self.globalRPY_pub = self.create_publisher(Vector3Stamped, "torcs_global_rpy", 1)
        self.track_pub = self.create_publisher(LaserScan, "torcs_track", 1)
        self.opponents_pub = self.create_publisher(LaserScan, "torcs_opponents", 1)
        self.focus_pub = self.create_publisher(LaserScan, "torcs_focus", 1)
        self.speed_pub = self.create_publisher(TwistStamped, "torcs_speed", 1)
        self.debug_pub = self.create_publisher(String, "udp_string", 1)
        self.restart_pub = self.create_publisher(Bool, "notifications/restart_process", 1)

        self.connected = False
        while not self.connected:
            self.get_logger().warn("Not connected to server yet!!")
            self.connected = self.connect()
        
    def connect(self):
        result = False
        angles = self.init_angles()
        initString = SimpleParser.stringify("init", angles, 19)
        self.get_logger().info("Sending id to server: {}".format(self.config.id) )
        initString = "{}{}".format(self.config.id, initString)
        self.get_logger().info("Sending init string to ther server: {}".format(initString))
        if self.sock.sendto(initString.encode(), (self.config.host_name, self.config.server_port)) < 0:
            self.get_logger().info("cannot send data")
            self.sock.close()
            sys.exit()
        
        buf = self.sock.recvfrom(1000)[0]
        data = buf.decode().rstrip('\x00')
        
        self.get_logger().info("Received : {}".format(data))
        if data == "***identified***":
            self.get_logger().info("Server {}".format(data))
            result = True

        return result

    def update(self):
        self.get_logger().info("Start update")
        buf = self.sock.recvfrom(1000)[0]
        data = buf.decode().rstrip('\x00')
        
        self.get_logger().info("Received : {}".format(data))
        if data == "***shutdown***":
            self.get_logger().info("Client Shutdown")
            self.shutdownClient = True

        elif data == "***restart***":
            self.get_logger().info("Client Restart")
            self.restart.data = True
            self.restart_pub.publish(self.restart)
            self.restart.data = False
        
        self.currentStep = self.currentStep + 1
        if self.currentStep != self.config.max_steps:
            udp_str = data
            self.debug_string.data = udp_str
            self.debug_pub.publish(self.debug_string)
            self.sensorsMsgFromString(data)
            self.ctrl_pub.publish(self.torcs_ctrl)
            self.torcs_sensors_pub.publish(self.torcs_sensors)
            self.globalSpeed_pub.publish(self.globalSpeed)
            self.globalPose_pub.publish(self.globalPose)
            self.globalRPY_pub.publish(self.globalRPY)
            self.track_pub.publish(self.track)
            self.opponents_pub.publish(self.opponents)
            self.focus_pub.publish(self.focus)
            self.speed_pub.publish(self.speed)

            if self.torcs_ctrl.meta == 1:
                self.restart.data = True
            self.restart_pub.publish(self.restart)
            self.restart.data = False

            broadcast = tf2_ros.TransformBroadcaster(self)
            transform_stamped = TransformStamped()
            transform_stamped.header = Header()
            transform_stamped.header.frame_id = "world"
            transform_stamped.header.stamp = self.get_clock().now().to_msg()
            transform_stamped.child_frame_id = "baselink"

            transform = Transform()
            translation = Vector3()
            translation.x = self.globalPose.pose.position.x
            translation.y = self.globalPose.pose.position.y
            translation.z = self.globalPose.pose.position.z
            transform.translation = translation

            quat_base = Quaternion()
            quat_base.x = self.globalRPY.vector.x
            quat_base.y = self.globalRPY.vector.y
            quat_base.z = self.globalRPY.vector.z
            transform.rotation = quat_base

            transform_stamped.transform = transform
            
            broadcast.sendTransform(transform_stamped)

            action = self.ctrlMsgToString()
            data = action # haya
        else:
            data = "(meta 1)"
        
        if self.sock.sendto(data.encode(), (self.config.host_name, self.config.server_port)) < 0:
            self.get_logger().info("cannot send data")
            self.sock.close()
            sys.exit()
        else:
            self.get_logger().info("Sending: {}".format(data))

        self.get_logger().info("End update")

    def getParams(self):
        pass

    def init_angles(self):
        angles = [0.0] * 19
        for i in range(0, 19):
            angles[i] = -90 + i * 10
        return angles

    def initRangeFinder(self, frame, angle_min, angle_max, range_min, range_max, ranges_dim):
        result = LaserScan()
        result.header = Header()

        result.header.frame_id = frame
        result.header.stamp = self.get_clock().now().to_msg()

        result.angle_min = angle_min
        result.angle_max = angle_max
        result.angle_increment = (angle_max - angle_min)/ranges_dim
        result.range_min = range_min
        result.range_max = range_max
        result.ranges = [0.0] * ranges_dim

        return result

    def ac_callback(self, msg):
        # self.torcs_ctrl.gear = 2
        self.torcs_ctrl.accel = msg.data

    def sc_callback(self, msg):
        self.torcs_ctrl.steering = msg.data
        
    def bc_callback(self, msg):
        self.torcs_ctrl.brake = msg.data

    def gc_callback(self, msg):
        self.torcs_ctrl.gear = msg.data

    def ctrlCallback(self, msg):
        self.torcs_ctrl = msg
    
    def sensorsMsgFromString(self, torcs_string):
        self.torcs_sensors.header.stamp = self.get_clock().now().to_msg()
        self.globalSpeed.header.stamp = self.get_clock().now().to_msg()
        self.globalSpeed.header.frame_id = "world"
        self.globalPose.header.stamp = self.get_clock().now().to_msg()
        self.globalPose.header.frame_id = "world"
        self.globalRPY.header.stamp = self.get_clock().now().to_msg()
        self.globalRPY.header.frame_id = "world"

        self.torcs_sensors.angle = float(SimpleParser.parse(torcs_string, "angle"))
        self.torcs_sensors.current_lap_time = float(SimpleParser.parse(torcs_string, "curLapTime"))
        self.torcs_sensors.damage = float(SimpleParser.parse(torcs_string, "damage"))
        self.torcs_sensors.dist_from_start = float(SimpleParser.parse(torcs_string, "distFromStart"))
        self.torcs_sensors.dist_raced = float(SimpleParser.parse(torcs_string, "distRaced"))
        self.torcs_sensors.fuel = float(SimpleParser.parse(torcs_string, "fuel"))
        self.torcs_sensors.gear = int(SimpleParser.parse(torcs_string, "gear"))
        self.torcs_sensors.last_lap_time = float(SimpleParser.parse(torcs_string, "lastLapTime"))
        self.torcs_sensors.race_pos = int(SimpleParser.parse(torcs_string, "racePos"))
        self.torcs_sensors.rpm = float(SimpleParser.parse(torcs_string, "rpm"))
        self.torcs_sensors.track_pos = float(SimpleParser.parse(torcs_string, "trackPos"))
        self.torcs_sensors.dist_to_middle = float(SimpleParser.parse(torcs_string, "distToMiddle"))
        self.torcs_sensors.dist_to_left = float(SimpleParser.parse(torcs_string, "distToLeft"))
        self.torcs_sensors.dist_to_right = float(SimpleParser.parse(torcs_string, "distToRight"))
        
        wheel_spin_vel = SimpleParser.parse(torcs_string, "wheelSpinVel", 4)
        wheel_spin_vel_float = []
        for vel in wheel_spin_vel:
            wheel_spin_vel_float.append(float(vel))
        self.torcs_sensors.wheel_spin_vel = wheel_spin_vel_float
        self.globalPose.pose.position.z = float(SimpleParser.parse(torcs_string, "z"))
        self.globalPose.pose.position.x = float(SimpleParser.parse(torcs_string, "x"))
        self.globalPose.pose.position.y = float(SimpleParser.parse(torcs_string, "y"))
        roll = float(SimpleParser.parse(torcs_string, "roll"))
        pitch = float(SimpleParser.parse(torcs_string, "pitch"))
        yaw = float(SimpleParser.parse(torcs_string, "yaw"))
        self.globalRPY.vector.x = roll
        self.globalRPY.vector.y = pitch
        self.globalRPY.vector.z = yaw

        
        self.globalPose.pose.orientation.x = roll
        self.globalPose.pose.orientation.y = pitch
        self.globalPose.pose.orientation.z = yaw

        self.globalSpeed.twist.linear.x = float(SimpleParser.parse(torcs_string, "speedGlobalX"))
        self.globalSpeed.twist.linear.y = float(SimpleParser.parse(torcs_string, "speedGlobalY"))

        focus_array = SimpleParser.parse(torcs_string, "focus", self.config.num_focus_ranges)
        self.focus = self.laserMsgFromFloatArray(focus_array)

        opponents_array = SimpleParser.parse(torcs_string, "opponents", self.config.num_opponents_ranges)
        self.opponents = self.laserMsgFromFloatArray(opponents_array)

        track_array = SimpleParser.parse(torcs_string, "track", self.config.num_track_ranges)
        self.track = self.laserMsgFromFloatArray(track_array)

        self.speed.header.stamp = self.get_clock().now().to_msg()
        self.speed.twist.linear.x = float(SimpleParser.parse(torcs_string, "speedX"))
        self.speed.twist.linear.y = float(SimpleParser.parse(torcs_string, "speedY"))
        self.speed.twist.linear.z = float(SimpleParser.parse(torcs_string, "speedZ"))

    def ctrlMsgToString(self):
        result = ""
        result = result + "{}".format(SimpleParser.stringify("accel", self.torcs_ctrl.accel))
        result = result + "{}".format(SimpleParser.stringify("brake", self.torcs_ctrl.brake))
        result = result + "{}".format(SimpleParser.stringify("gear", self.torcs_ctrl.gear))
        result = result + "{}".format(SimpleParser.stringify("steer", self.torcs_ctrl.steering))
        result = result + "{}".format(SimpleParser.stringify("clutch", self.torcs_ctrl.clutch))
        result = result + "{}".format(SimpleParser.stringify("focus", self.torcs_ctrl.focus))
        result = result + "{}".format(SimpleParser.stringify("meta", self.torcs_ctrl.meta))

        return result
    
    def laserMsgFromFloatArray(self, float_array):
        scan_result = self.focus
        size = len(scan_result.ranges)
        scan_result.header.stamp = self.get_clock().now().to_msg()
        for i in range(0, size):
            scan_result.ranges[size-1-i] = float_array[i]
        
        return scan_result