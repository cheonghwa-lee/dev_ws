'''
    Generated automatically by Splash Code Generator for processing_component_1
'''
from std_msgs.msg import Float32

from scl.components import *
from scl.impl.singleton import Singleton

from ..factory.factory_0 import Factory0

from torcs_interfaces.msg import TORCSSensors

import numpy as np
from ..factory import tcp_req
import queue
import json
import traceback


class ProcessingComponent1(Component, metaclass=Singleton):
    def __init__(self):
        super().__init__(name="processing_component_1", factory=Factory0(), mode="Mode A")
        self.angle_z_constant = 3.14 / 2
        self.direction_ratio = 2.0
        self.prev_error = 0
        self.flag = False
        self.angle_z_target = None
        self.target_updated_time = None
        self.distance_constant = 5.5 - 1.5
        self.direction_target = 0.0
        self.prev_error = 0
        self.dt = 1
        self.state_prev = 0.0
        self.action_prev = 0.0
        self.reward_prev = 0.0
        self.w = -1.0
        self.b = -1.0
        self.lr = 0.0001
        self.history = []
        self.gradient = 0.0
        self.reward_total = 0.0
        self.tcp_queue = queue.Queue(2048)   
        self.tcp_thread = tcp_req.tcp_req(self.tcp_queue, "192.168.0.60")
        self.tcp_thread.start()


    def setup(self):
        self.attach_stream_input_port(channel="fusion1", callback=self.user_callback_1, from_fusion=True)
        self.attach_stream_output_port(msg_type=Float32, channel="sink_al_theta")
        self.declare_parameter('gain', (0.3, 0.0, 10.5))
    
    def user_callback_1(self, msg):
        linear_x = msg.source_x.data
        distance_mid = msg.source_d.data
        angle_z = msg.source_theta.data

        linear_x_sign = 1 if linear_x > 0 else 0
        distance_mid_sign = 1 if distance_mid > 0 else 0
        angle_z_sign = 1 if angle_z > 0 else 0
        linear_xs = '{:.4f}'.format(round(abs(linear_x),4))
        distance_mids = '{:.6f}'.format(round(abs(distance_mid),6))
        angle_zs = '{:.8f}'.format(round(abs(angle_z),8))
        json_data = {'angle_z':angle_zs,'angle_z_sign':angle_z_sign,'distance_mid':distance_mids,'distance_mid_sign':distance_mid_sign,'linear_x':linear_xs,'linear_x_sign':linear_x_sign}
        
        
        if abs(distance_mid) < 1.0:
            direction = - (distance_mid / self.distance_constant) * 0.1
        elif abs(distance_mid) < 2.0:
            direction = - (distance_mid / self.distance_constant) * 0.2
        elif abs(distance_mid) < 3.0:
            direction = - (distance_mid / self.distance_constant) * 0.3
        elif abs(distance_mid) < 4.0:
            direction = - (distance_mid / self.distance_constant) * 0.4
        else:
            direction = - (distance_mid / self.distance_constant) * 0.5

        if abs(angle_z) < 0.01:
            direction += angle_z * 1
        elif abs(angle_z) < 0.03:
            direction += angle_z * 1.1
        elif abs(angle_z) < 0.05:
            direction += angle_z * 1.2
        elif abs(angle_z) < 0.07:
            direction += angle_z * 1.3
        else:
            direction += angle_z * 2.0

        error = angle_z - (distance_mid / self.distance_constant)#*(linear_x/ # self.direction_target -
        gain = self.get_parameter("gain").value
        kp = gain[0]
        ki = gain[1]
        kd = gain[2]

        new_msg = Float32()
        new_msg.data = kp*error + ki*(self.prev_error + error*self.dt) + kd*(error/self.dt)
        new_msg.data = direction 
        # new_msg.data = angle_z
        self.write("sink_al_theta", new_msg)

    #     ## haya-learning
    #     print(self.w, self.b)
    #     angle_z = msg.source_theta.data
    #     print(angle_z, self.action_prev, self.gradient)
    #     ##########################################################
    #     distance_mid = msg.source_d.data
    #     self.reward_prev = self.ftn_reward(distance_mid)
    #     dataset = [self.state_prev, self.action_prev, self.reward_prev]
    #     self.history.append(dataset)
    #     ##########################################################
    #     self.gradient = self.ftn_gradient(distance_mid, self.state_prev)
    #     self.w += self.lr * self.gradient
    #     self.b += self.lr * self.gradient
    #     ##########################################################
    #     action = self.ftn_haya(distance_mid)
    #     direction = action

    #     new_msg = Float32()
    #     # new_msg.data = kp*error + ki*(self.prev_error + error*self.dt) + kd*(error/self.dt)
    #     new_msg.data = direction 
    #     # new_msg.data = angle_z
    #     self.write("sink_al_theta", new_msg)
    #     ##########################################################
    #     self.state_prev = distance_mid
    #     self.action_prev = action
    #     self.reward_total += self.reward_prev

    # def ftn_gradient(self, state_prev, state_curr):
    #     error = state_prev - state_curr
    #     if error > 0:
    #         gradient = -1
    #     elif error < 0:
    #         gradient = +1
    #     else:
    #         gradient = 0

    #     return gradient

    # def ftn_haya(self, state):
    #     z = self.w*state+self.b
    #     y = 1 / (1 + np.exp(-z)) - 0.5
    #     return y

    # # def ftn_haya(self, state):
    # #     z1 = self.w1*state+self.b1
    # #     y1 = np.maximum(0, z1)
    # #     z2 = self.w2*state+self.b2
    # #     y2 = np.maximum(0, z2)
    # #     z3 = self.w31*y1 + self.w32*y2 +self.b3
    # #     y3 = np.maximum(0, z3)
    # #     return y3

    # def ftn_reward(self, state):
    #     if state < 0.1:
    #         reward = 1
    #     if state < 0.2:
    #         reward = 0.1
    #     else:
    #         reward = 0
        
    #     return reward


        
    
    

