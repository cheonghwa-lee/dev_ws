from rclpy.time import Time
import time

class RateController():
    def __init__(self, stream_output_port):
        self._queue = []
        self._stream_output_port = stream_output_port
        self._publisher = self._stream_output_port.get_publisher()
        self._last_sent_item = None
        self._initialized = False
        self.exception = Exception
        self.prev = 0.0
        self.count_prev = 0.0
        self._count_queue = []
        self.count = 0
        self.count_rate = 0
        self.count_fresh = 0
        self.count_publish = 0
        self.tlqkf1_prev = 0.0

    # def _create_timer(self): # haya-rate
    #     component = self._stream_output_port.parent
    #     if self._queue is True:
    #         rate = 0
    #         # print("!-@-"*10, self._queue)
    #     else:
    #         rate = 1.0/self._stream_output_port.get_rate_constraint()
    #     return component.create_timer(rate, self._task)

    def _create_timer(self):
        component = self._stream_output_port.parent
        return component.create_timer(1.0/self._stream_output_port.get_rate_constraint(), self._task)


    def _task(self):
        if len(self._queue) > 0:
            # print("*"*5, len(self._queue))
            msg = self._queue.pop(0)
            # self._count_queue.append(msg)
            self.count += 1
            self.count_rate += 1
            time_diff_ms = (self._stream_output_port.parent.get_clock().now().nanoseconds - Time.from_msg(msg.header.stamp).nanoseconds) / 1000000
            if msg.freshness > 0 and msg.freshness < time_diff_ms:
                self.count_fresh += 1
                # raise self.exception('{}ms exceeded(constraint: {}ms, cur: {}ms'.format(time_diff_ms - msg.freshness, msg.freshness, time_diff_ms))
                self._task()
                return 
            tlqkf1 = time.time()
            self.count_publish += 1
            # print("rate publish: ", tlqkf1 - self.tlqkf1_prev)
            self._publisher.publish(msg)
            self.tlqkf1_prev = tlqkf1
        elif self._last_sent_item:
            self.count += 1
            msg = self._last_sent_item
        else:
            return
        self._last_sent_item = msg
        # self._queue = []

        # if self._stream_output_port.parent.mode == self._stream_output_port.parent.get_current_mode(): # haya-rate
        #     # print("*"*100, msg)
        #     tlqkf = time.time() # haya-rate
        #     # print("tlqkf", tlqkf - self.prev)
        #     self.prev = tlqkf
        #     self._count_queue.append(msg)
        #     self._publisher.publish(msg)

    def _create_count_timer(self):
        component = self._stream_output_port.parent
        return component.create_timer(1.0, self._count_task)

    def _count_task(self):
        # print(len(self._count_queue))
        tlqkf = time.time()
        # print("!"*10, self.count, self.count_publish, tlqkf - self.count_prev)
        # print(len(self._count_queue), len(self._queue), self.count_rate, self.count_fresh, self.count, self.count_publish, tlqkf - self.count_prev)
        # print(self.count, self.count_fresh, len(self._queue), tlqkf - self.count_prev)
        self.count_prev = tlqkf
        # self._count_queue = []
        self.count = 0
        self.count_fresh = 0
        self.count_publish = 0

    # def _create_freshness_timer(self):
    #     component = self._stream_output_port.parent
    #     return component.create_timer(0.01, self._freshness_task)

    # def _freshness_task(self):
    #     if len(self._queue) > 0:
    #         msg = self._queue.pop(0)
    #         time_diff_ms = (self._stream_output_port.parent.get_clock().now().nanoseconds - Time.from_msg(msg.header.stamp).nanoseconds) / 1000000
    #         if msg.freshness > 0 and msg.freshness < time_diff_ms:
    #             self.count_fresh += 1
    #             raise self.exception('{}ms exceeded(constraint: {}ms, cur: {}ms'.format(time_diff_ms - msg.freshness, msg.freshness, time_diff_ms))
    #             self._task()
    #             return 
    #         tlqkf1 = time.time()
    #         # print("rate publish: ", tlqkf1 - self.tlqkf1_prev)
    #         self._publisher.publish(msg)
    #         self.tlqkf1_prev = tlqkf1
    #     elif self._last_sent_item:
    #         msg = self._last_sent_item
    #     else:
    #         return
    #     self._last_sent_item = msg

    def push(self, msg):
        if not self._initialized:
            self._timer = self._create_timer()
            self._count_timer = self._create_count_timer()
            # self._freshness_timer = self._create_freshness_timer()
            self._initialized = True
        self._queue.append(msg)
        self._count_queue.append(msg)
