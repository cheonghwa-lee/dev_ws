import socket   #for sockets
import sys  #for exit
import time
import threading
import queue
import requests
import signal
import json
import subprocess
import traceback
from datetime import datetime

class tcp_req(threading.Thread):
    def __init__(self, workQueue, workQueue2, serverIP):
        threading.Thread.__init__(self)
        self.signal = True
        self.str_msg = ""
        self.workQueue = workQueue
        self.workQueue2 = workQueue2
        self.serverIP = serverIP

    def stop(self):
        self.signal = False

    def run(self):
        while self.signal:
            try:
                client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                client_socket.connect((self.serverIP, 5000))
            except:
                traceback.print_exc()
                time.sleep(1)
            while self.signal:
                try:
                    self.str_msg = self.workQueue.get()
                    print("send data: ", self.str_msg)
                    client_socket.send(str(self.str_msg).encode())
                    self.workQueue2.put(client_socket.recv(1))
                except:
                    traceback.print_exc()
                    try:
                        sclient_socket.close()
                    except:
                        pass
                    break
        self.signal = False