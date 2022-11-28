#!/usr/bin/env python3

import maya
from pynput import keyboard
import threading, time

linear_speed = 7 # 0-7
angular_speed = 2


pressed = None

state = "STOPPED"

def on_press(key):
    global pressed
    try:
        pressed = key.char
    except AttributeError:
        pass
   
def on_release():
    global pressed
    #pressed.remove(key.char)
    pressed = None
    
def getState():
    #print(pressed)
    
    if 'w' == pressed:
        return "FORWARD"
    
    if 's' == pressed:
        return "BACKWARD"
    
    if 'd' == pressed:
        return "ROT_RIGHT"
    
    if 'a' == pressed:
        return "ROT_LEFT"

    return "STOPPED"

def rightTurn():
    config = maya.RobotConfig
    
    config.frontRightSpeed = angular_speed
    config.frontLeftSpeed = -angular_speed
    config.rearRightSpeed = angular_speed
    config.rearRightSpeed = -angular_speed
    
    maya.sendConfig(config)

def leftTurn():
    config = maya.RobotConfig
    
    config.frontRightSpeed = -angular_speed
    config.frontLeftSpeed = angular_speed
    config.rearRightSpeed = -angular_speed
    config.rearRightSpeed = angular_speed
    
    maya.sendConfig(config)

def forward():
    config = maya.RobotConfig
    
    config.frontRightSpeed = linear_speed
    config.frontLeftSpeed = linear_speed
    config.rearRightSpeed = linear_speed
    config.rearRightSpeed = linear_speed
    
    maya.sendConfig(config)

def backward():
    config = maya.RobotConfig
    
    config.frontRightSpeed = -linear_speed
    config.frontLeftSpeed = -linear_speed
    config.rearRightSpeed = -linear_speed
    config.rearRightSpeed = -linear_speed
    
    maya.sendConfig(config)
  
def stop():
    config = maya.RobotConfig
    config.frontRightSpeed = 0
    config.frontLeftSpeed = 0
    config.rearRightSpeed = 0
    config.rearRightSpeed = 0
    maya.sendConfig(config)

def keyCapture(none):
    # Collect events until released
    with keyboard.Listener(
        on_press=on_press,
        on_release=on_release) as listener:
            listener.join()

    # ...or, in a non-blocking fashion:
    listener = keyboard.Listener(
        on_press=on_press,
        on_release=on_release)
    listener.start()
    

#### PROGRAM


if not maya.connect():
    print("Error: connection with MAYA failed!")
    exit(1)

print("Conected\n")

keyCaptureThread = threading.Thread(target=keyCapture, args=(1,))
keyCaptureThread.start()

while True:
    
    time.sleep(0.05)
   
    new_state = getState()
    if state != new_state:
        state = new_state
    
        if state == "ROT_RIGHT":
            rightTurn()
        elif state  == "ROT_LEFT":
            leftTurn()
        elif state == "FORWARD":
            forward()
        elif state == "BACKWARD":
            backward()
        else:
            stop()
    
    print(state)

# maya.disconnect()