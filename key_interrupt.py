from evdev import *
import threading
# from time import sleep

# def tlqkf():
#     while 1:
#         print("\ntlqkf")
#         sleep(1)

def fuck():
    dev = InputDevice('/dev/input/event3')
    print(dev)

    for event in dev.read_loop():
        if event.type == ecodes.EV_KEY and event.value == 0:
            print(event.code)

if __name__ == "__main__":
    thread1 = threading.Thread(target=fuck)

    thread1.start()