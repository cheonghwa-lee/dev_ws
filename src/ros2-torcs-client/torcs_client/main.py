from .torcs_client import TORCSClient
import rclpy
import time
def main():
    rclpy.init()

    torcsClient = TORCSClient()
    torcsClient.connect()
    print(torcsClient.speed)
    print(torcsClient.speed)
    print(torcsClient.speed)
    print(torcsClient.speed)
    print(torcsClient.speed)
    print(torcsClient.speed)
    print(torcsClient.speed)
    
    rate = torcsClient.create_rate(100)
    while rclpy.ok:    
        torcsClient.update()
        rclpy.spin_once(torcsClient)
        # rate.sleep()

    rclpy.shutdown()