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

# import sys
# print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
# print(sys.path)
# print("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%55")

from two_layer_net import TwoLayerNet
from n_layer_net import NLayerNet
import csv
import pickle
from common.functions import *
from common.layers import *
from common.gradient import numerical_gradient

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
        self.tcp_queue2 = queue.Queue(2048)   
        self.tcp_thread = tcp_req.tcp_req(self.tcp_queue, self.tcp_queue2, "192.168.0.60")
        self.tcp_thread.start()
        self.state_temp1 = 0
        self.state_temp2 = 0
        self.angle_z = 0
        self.params = {}
        self.d_max = 0
        self.d_min = 0
        self.a_max = 0
        self.a_min = 0
        self.s_max = 0
        self.s_min = 0

    def setup(self):
        self.attach_stream_input_port(channel="fusion1", callback=self.user_callback_1, from_fusion=True)
        self.attach_stream_output_port(msg_type=Float32, channel="sink_al_theta")
        self.declare_parameter('gain', (0.3, 0.0, 10.5))
    
    def user_callback_1(self, msg):
        linear_x = msg.source_x.data
        distance_mid = msg.source_d.data
        angle_z = msg.source_theta.data
        # print(angle_z, distance_mid, linear_x)

        # try:
        #     with open("/home/hayaclee/result.txt", "a") as f:
        #         f.write(f"{linear_x},{distance_mid},{angle_z}\n") # hayalee
        # except:
        #     traceback.print_exc()
        #     pass

## 자율주행 코드

        # linear_x_sign = 1 if linear_x > 0 else 0
        # distance_mid_sign = 1 if distance_mid > 0 else 0
        # angle_z_sign = 1 if angle_z > 0 else 0
        # linear_xs = '{:.4f}'.format(round(abs(linear_x),4))
        # distance_mids = '{:.6f}'.format(round(abs(distance_mid),6))
        # angle_zs = '{:.8f}'.format(round(abs(angle_z),8))
        # json_data = {'angle_z':angle_zs,'angle_z_sign':angle_z_sign,'distance_mid':distance_mids,'distance_mid_sign':distance_mid_sign,'linear_x':linear_xs,'linear_x_sign':linear_x_sign}
        
        # if abs(distance_mid) < 1.0:
        #     direction = - (distance_mid / self.distance_constant) * 0.1
        # elif abs(distance_mid) < 2.0:
        #     direction = - (distance_mid / self.distance_constant) * 0.2
        # elif abs(distance_mid) < 3.0:
        #     direction = - (distance_mid / self.distance_constant) * 0.3
        # elif abs(distance_mid) < 4.0:
        #     direction = - (distance_mid / self.distance_constant) * 0.4
        # else:
        #     direction = - (distance_mid / self.distance_constant) * 0.5

        # if abs(angle_z) < 0.01:
        #     direction += angle_z * 1
        # elif abs(angle_z) < 0.03:
        #     direction += angle_z * 1.1
        # elif abs(angle_z) < 0.05:
        #     direction += angle_z * 1.2
        # elif abs(angle_z) < 0.07:
        #     direction += angle_z * 1.3
        # else:
        #     direction += angle_z * 2.0

        # steer = direction

        # try:
        #     with open("/home/hayaclee/result.txt", "a") as f:
        #         f.write(f"{linear_x}, {distance_mid}, {angle_z}, {steer}\n") # hayalee
        # except:
        #     traceback.print_exc()
        #     pass

        # error = angle_z - (distance_mid / self.distance_constant)#*(linear_x/ # self.direction_target -
        # gain = self.get_parameter("gain").value
        # kp = gain[0]
        # ki = gain[1]
        # kd = gain[2]

## 자율주행 코드

        
        error = angle_z - (distance_mid / self.distance_constant)#*(linear_x/ # self.direction_target -
        gain = self.get_parameter("gain").value
        kp = gain[0]
        ki = gain[1]
        kd = gain[2]

        network = NLayerNet(input_size=4, hidden_size1=15, hidden_size2=15, output_size=3)
        
        with open("/home/hayaclee/nn.pkl", "rb") as f:
            self.params = pickle.load(f)
               
            # network.params = {}
        network.params['W1'] = self.params['W1']
        network.params['b1'] = self.params['b1']
        network.params['W2'] = self.params['W2']
        network.params['b2'] = self.params['b2']
        network.params['W3'] = self.params['W3']
        network.params['b3'] = self.params['b3']

        # 계층 생성
        # network.layers = OrderedDict()
        network.layers['Affine1'] = Affine(self.params['W1'], self.params['b1'])
        network.layers['Relu1'] = Relu()
        network.layers['Affine2'] = Affine(self.params['W2'], self.params['b2'])
        network.layers['Relu2'] = Relu()
        network.layers['Affine3'] = Affine(self.params['W3'], self.params['b3'])

        network.lastLayer = SoftmaxWithLoss()

        with open("/home/hayaclee/mm.txt", 'r') as f:
            c_reader = csv.reader(f, delimiter=',')
            for row in c_reader:
                self.d_max = float(row[0])
                self.d_min = float(row[1])
                self.a_max = float(row[2])
                self.a_min = float(row[3])
                self.s_max = float(row[4])
                self.s_min = float(row[5])
        distance_mid_norm = self.norm_haya(distance_mid, self.d_max, self.d_min)
        angle_z_norm = self.norm_haya(angle_z, self.a_max, self.a_min)
        # print(distance_mid, self.d_max, self.d_min)
        # print(angle_z, self.a_max, self.a_min)
        current = [distance_mid_norm, angle_z_norm]
        goal = [0, 0]
        input = current + goal
        input = np.array([input])
        pred = network.predict(input)
        output = softmax(pred)
        idx = np.argmax(output)


        if idx == 0:
            direction = 0.1
        elif idx == 1:
            direction = 0.0
        elif idx == 2:
            direction = -0.1
        else:
            print('tlqkf!')
        
        # print(pred, output, idx)
        print(distance_mid_norm, distance_mid, idx)

        # print(distance_mid, angle_z, direction)

        new_msg = Float32()
        new_msg.data = kp*error + ki*(self.prev_error + error*self.dt) + kd*(error/self.dt)
        new_msg.data = direction 
        # new_msg.data = angle_z
        self.write("sink_al_theta", new_msg)

        # linear_x = msg.source_x.data
        # distance_mid = msg.source_d.data
        # self.angle_z = msg.source_theta.data

        # if(distance_mid < -3.0):
        #     self.state_temp1 = 1
        # elif(distance_mid < -2.5):
        #     self.state_temp1 = 2
        # elif(distance_mid < -2.0):
        #     self.state_temp1 = 3
        # elif(distance_mid < -1.5):
        #     self.state_temp1 = 4
        # elif(distance_mid < 1.5):
        #     self.state_temp1 = 5
        # elif(distance_mid < 2.0):
        #     self.state_temp1 = 6
        # elif(distance_mid < 2.5):
        #     self.state_temp1 = 7
        # elif(distance_mid < 3.0):
        #     self.state_temp1 = 8
        # else:
        #     self.state_temp1 = 9

        # if(self.state_temp2 != self.state_temp1):
        #     print(self.state_temp1, self.state_temp2)
        #     self.tcp_queue.put(self.state_temp1)
        #     action = int(self.tcp_queue2.get())
        #     print("action", action)
        #     if action == 0:
        #         self.angle_z = -0.8
        #     elif action == 1:
        #         self.angle_z = 0.8
        #     elif action == 2:
        #         self.angle_z = 0

        # self.state_temp2 = self.state_temp1
        # new_msg = Float32()
        # new_msg.data = self.angle_z
        # self.write("sink_al_theta", new_msg)
    
        '''
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
        '''
        # new_msg.data = angle_z
        #self.write("sink_al_theta", new_msg)

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

    def norm_haya(self, value, max_value, min_value):
        a = 2 / (max_value - min_value)
        b = -1 * ((max_value + min_value) / (max_value-min_value))
        out = a*value + b
        return out
        
    
    

