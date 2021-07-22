'''
    Generated automatically by Splash Code Generator for source_angle_z
'''
from std_msgs.msg import Float32
from torcs_interfaces.msg import TORCSSensors

from scl.components import *
from scl.impl.singleton import Singleton

from ..factory.factory_0 import Factory0

import numpy as np

import time
import pandas as pd
import csv

class SourceAngleZ(Component, metaclass=Singleton):
    def __init__(self):
        super().__init__(name="source_angle_z", factory=Factory0(), mode="Mode A")
        
    def setup(self):
        self.create_subscription(TORCSSensors, "/torcs_sensors_out", self.torcs_sensor_callback, 1)
        self.attach_stream_output_port(msg_type=Float32, channel="source_theta")
        for link in self.links:
            if link.channel == "source_theta":
                port = link.src
                port.set_rate_constraint(0)
                # print("tlqkf")
        
        self.good = 0
        self.bad = 0
        self.limit = 0.0
        self.prev = 0.0
        self.previous_time = 0.0
        self._count_timer_1 = self._create_count_timer_1()
        # self.freshness = 1000
        self.tlqkf = []
        self.tlqkf2 = []
        # self.df = pd.DataFrame()

    def run(self):
        pass
    
    def torcs_sensor_callback(self, msg):
        dist_middle = msg.dist_to_middle
        current_lap_time = msg.current_lap_time
        
        
        tlqkf = np.random.uniform(0)

        # print(self.good, '    ', self.bad)
        # print(self._stream_output_ports.items())

        if tlqkf > self.limit:
            self.good += 1
            # print("tlqkf!")
            angle_z = msg.angle
            new_msg = Float32()
            # self.get_logger().info("dist_middle: {}".format(new_msg))
            new_msg.data = angle_z
            current_time = time.time()
            # print("tlqkf!!!", current_time - self.prev)
            self.prev = current_time
            # print("source publish: ", current_time - self.previous_time)
            self.write("source_theta", new_msg)
            self.previous_time = current_time
            # print(current_lap_time, dist_middle)
        else:
            # print("*"*30)
            self.bad += 1
            pass

        # df = pd.DataFrame([current_lap_time], [dist_middle], columns=["a"])
        # print(self.df)
        # self.tlqkf.append(df)
        # self.df.append([current_lap_time], [dist_middle])
        # self.df.to_csv("tlqkf.csv")
        self.tlqkf.append(current_lap_time)
        self.tlqkf2.append(dist_middle)
        # print(self.tlqkf)

        with open('tlqkf.csv', 'w', newline='') as f:
            writer = csv.writer(f)
            writer.writerow(self.tlqkf)
            writer.writerow(self.tlqkf2)
    
    def _create_count_timer_1(self):
        # component = self._stream_output_port.parent
        return self.create_timer(1.0, self._count_task_1)

    def _count_task_1(self):
        # print(len(self._count_queue))
        # tlqkf = time.time()
        # print(self.good, self.bad, (abs(self.good - self.bad) / (self.good + self.bad)) * 100)
        self.good = 0
        self.bad = 0

