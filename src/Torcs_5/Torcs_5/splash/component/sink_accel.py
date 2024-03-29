'''
    Generated automatically by Splash Code Generator for sink_accel
'''
from std_msgs.msg import Float32

from scl.components import *
from scl.impl.singleton import Singleton

import random

class SinkAccel(Component, metaclass=Singleton):
    def __init__(self):
        super().__init__(name="sink_accel", factory=None, mode=None)
    
    def setup(self):
        self.attach_stream_input_port(msg_type=Float32, channel="sink_al_x", callback=self.user_callback_1)
        self.attach_stream_input_port(msg_type=Float32, channel="sink_x", callback=self.user_callback_2)
        self.acc_publisher = self.create_publisher(Float32, "accel_command", 1)
        self.brk_publisher = self.create_publisher(Float32, "brake_command", 1)

    def run(self):
        pass
    
    def user_callback_1(self, msg):
        linear_x_command = msg.data
        # linear_x_command = random.choice([1.5, 0.5, -0.5])
        accel = 0.0
        
        if linear_x_command > 1.0:
            accel = 1.0
            brake = 0.0
        elif linear_x_command < 0.0:
            accel = 0.01
            brake = 0.01
        else:
            accel = linear_x_command
            brake = 0.0        

        new_msg_acc = Float32()
        new_msg_acc.data = accel
        self.acc_publisher.publish(new_msg_acc)

        # brake = 0.0
        new_msg_brk = Float32()
        new_msg_brk.data = brake
        # self.get_logger().info("1: {}".format(brake))
        self.brk_publisher.publish(new_msg_brk)
        
    def user_callback_2(self, msg):
        new_msg = Float32()
        new_msg.data = msg.data
        self.acc_publisher.publish(new_msg)
        
    
    

