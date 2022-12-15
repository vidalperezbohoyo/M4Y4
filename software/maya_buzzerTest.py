#!/usr/bin/env python3

import maya
from pynput import keyboard
import threading, time

if not maya.connect():
    print("Error: connection with MAYA failed!")
    exit(1)

print("Conected\n")

while True:
    for i in range(8):
        msg = maya.RobotConfig
        msg.buzzerToneId = i
        maya.sendConfig(msg)
        time.sleep(1)
   
# maya.disconnect()
