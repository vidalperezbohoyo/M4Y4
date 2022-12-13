#!/usr/bin/env python3

import maya
from pynput import keyboard
import threading, time

linear_speed = 3 # 0-7
angular_speed = 2


pressed = set()

state = "STOPPED"

def on_press(key):
    global pressed, linear_speed
          
    try:     
        keyChar = key.char
        
        if keyChar == 'i':
            if linear_speed < 7:
                linear_speed += 1
                
        elif keyChar == 'k':
            if linear_speed > 0:
                linear_speed -= 1
        
        pressed.add(keyChar)
    except AttributeError:
        pass
    

   
def on_release(key):
    global pressed
    pressed = set()
    
    
def getState():
    #print(pressed)
    
    if 'w' in pressed:
        return "FORWARD"
    
    if 's' in pressed:
        return "BACKWARD"
    
    if 'd' in pressed:
        return "ROT_RIGHT"
    
    if 'a' in pressed:
        return "ROT_LEFT"

    return "STOPPED"

def leftTurn():
    config = maya.RobotConfig
    
    config.frontLeftAngle = -45
    config.frontRightAngle = 45
    config.rearLeftAngle = 45
    config.rearRightAngle = -45

    config.frontLeftSpeed = -linear_speed
    config.frontRightSpeed = linear_speed
    config.rearLeftSpeed = -linear_speed
    config.rearRightSpeed = linear_speed
    
    maya.sendConfig(config)

def rightTurn():
    config = maya.RobotConfig

    config.frontLeftAngle = -45
    config.frontRightAngle = 45
    config.rearLeftAngle = 45
    config.rearRightAngle = -45

    config.frontLeftSpeed = linear_speed
    config.frontRightSpeed = -linear_speed
    config.rearLeftSpeed = linear_speed
    config.rearRightSpeed = -linear_speed
    
    maya.sendConfig(config)

def forward():
    config = maya.RobotConfig

    config.frontLeftAngle = 0
    config.frontRightAngle = 0
    config.rearLeftAngle = 0
    config.rearRightAngle = 0
    
    config.frontRightSpeed = linear_speed
    config.frontLeftSpeed = linear_speed
    config.rearRightSpeed = linear_speed
    config.rearLeftSpeed = linear_speed
    
    maya.sendConfig(config)

def backward():
    config = maya.RobotConfig

    config.frontLeftAngle = 0
    config.frontRightAngle = 0
    config.rearLeftAngle = 0
    config.rearRightAngle = 0
    
    config.frontRightSpeed = -linear_speed
    config.frontLeftSpeed = -linear_speed
    config.rearRightSpeed = -linear_speed
    config.rearLeftSpeed = -linear_speed
    
    maya.sendConfig(config)
  
def stop():
    config = maya.RobotConfig
    config.frontRightSpeed = 0
    config.frontLeftSpeed = 0
    config.rearRightSpeed = 0
    config.rearLeftSpeed = 0
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


def showGUI(): 
    print(chr(27) + "[2J")  
    
    print(" .----------------.  .----------------.  .----------------.  .----------------.")
    print("| .--------------. || .--------------. || .--------------. || .--------------. |")
    print("| | ____    ____ | || |      __      | || |  ____  ____  | || |      __      | |")
    print("| ||_   \  /   _|| || |     /  \     | || | |_  _||_  _| | || |     /  \     | |")
    print("| |  |   \/   |  | || |    / /\ \    | || |   \ \  / /   | || |    / /\ \    | |")
    print("| |  | |\  /| |  | || |   / ____ \   | || |    \ \/ /    | || |   / ____ \   | |")
    print("| | _| |_\/_| |_ | || | _/ /    \ \_ | || |    _|  |_    | || | _/ /    \ \_ | |")
    print("| ||_____||_____|| || ||____|  |____|| || |   |______|   | || ||____|  |____|| |")
    print("| |              | || |              | || |              | || |              | |")
    print("| '--------------' || '--------------' || '--------------' || '--------------' |")
    print(" '----------------'  '----------------'  '----------------'  '----------------'")
    
    
    
    print("CONTROLS:\n\n                  W [forward]\n\nA[turn left]      S[backard]      D[turn right]")
    
    print("\n\nI [Increase linear speed]   K [Decrease linear speed]")
    
    lin = ''
    for i in range(linear_speed):
        lin += '*'
    for i in range(7-linear_speed):
        lin += ' '
    
    print("\n\nLinear speed: [" + lin + ']')
    
    
    

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
    showGUI()


# maya.disconnect()
