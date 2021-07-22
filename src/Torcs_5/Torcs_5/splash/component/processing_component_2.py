'''
    Generated automatically by Splash Code Generator for processing_component_2
'''
from std_msgs.msg import Float32

from scl.components import *
from scl.impl.singleton import Singleton

from ..factory.factory_0 import Factory0

from torcs_interfaces.msg import TORCSSensors

class ProcessingComponent2(Component, metaclass=Singleton):
    def __init__(self):
        super().__init__(name="processing_component_2", factory=Factory0(), mode="Mode A")
        self.linear_x_target = 70.0
        self.target = 50.0
        self.prev_error = 0
        self.dt = 1
        self.prev_linear_x = 0
        self.cur_linear_x = 0

    def setup(self):
        self.attach_stream_input_port(msg_type=Float32, channel="source_x", callback=self.user_callback_1)
        self.attach_stream_output_port(msg_type=Float32, channel="sink_al_x")
        self.declare_parameter('gain2', (0.1, 0.0, 0.0))

    def run(self):
        pass
    
    def user_callback_1(self, msg):
        error = self.linear_x_target - msg.data
        gain = self.get_parameter("gain2").value
        kp = gain[0]
        ki = gain[1]
        kd = gain[2]

        new_msg = Float32()
        new_msg.data = kp*error + ki*(self.prev_error + error*self.dt) + kd*(error/self.dt)
        
        self.write("sink_al_x", new_msg)



        # print(new_msg.data)
        # if 
        # self.linear_x_target = 

        #tlqkf

        ###
    
    # def torcs_sensor_callback(self, msg):
    #     track_pos = msg.track_pos
    #     print(self.linear_x_target)
    #     if track_pos < 0.2:
    #         self.linear_x_target = self.target * 1.0
    #     elif track_pos < 0.3:
    #         self.linear_x_target = self.target * 0.95
    #     elif track_pos < 0.4:
    #         self.linear_x_target = self.target * 0.90
    #     elif track_pos < 0.5:
    #         self.linear_x_target = self.target * 0.85
    #     else:
    #         self.linear_x_target = self.target * 0.50
    '''    
    def setup(self):
        self.attach_stream_input_port(msg_type=Float32, channel="source_x", callback=self.user_callback_1)
        self.attach_stream_output_port(msg_type=Float32, channel="sink_al_x")
        self.declare_parameter('gain2', (0.1, 0.0, 0.0))
        # self.create_subscription(TORCSSensors, "/torcs_sensors_out", self.torcs_sensor_callback, 1)
    '''

    
    

