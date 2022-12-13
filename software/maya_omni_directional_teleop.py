#!/usr/bin/env python3

import maya
from pynput import keyboard
import threading, time

linear_speed = 3 # 0-7

pressed = set()

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
    try:   
        pressed.remove(key.char)
    except AttributeError:
        pass

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
    
    
    
    print("CONTROLS:\n\n                  W [forward]\n\nA[go left]      S[backard]      D[go right]      F[holonomic turn]")
    
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
   
    msg = maya.RobotConfig
    msg.frontLeftAngle = -45
    msg.frontRightAngle = 45
    msg.rearLeftAngle = 45
    msg.rearRightAngle = -45

    if 'd' in pressed:
        msg.frontLeftSpeed = linear_speed
        msg.frontRightSpeed = -linear_speed
        msg.rearLeftSpeed = -linear_speed
        msg.rearRightSpeed = linear_speed
         
    elif 'a' in pressed:
        msg.frontLeftSpeed = -linear_speed
        msg.frontRightSpeed = linear_speed
        msg.rearLeftSpeed = linear_speed
        msg.rearRightSpeed = -linear_speed

    elif 'w' in pressed:
        msg.frontLeftSpeed = linear_speed
        msg.frontRightSpeed = linear_speed
        msg.rearLeftSpeed = linear_speed
        msg.rearRightSpeed = linear_speed

    elif 's' in pressed:
        msg.frontLeftSpeed = -linear_speed
        msg.frontRightSpeed = -linear_speed
        msg.rearLeftSpeed = -linear_speed
        msg.rearRightSpeed = -linear_speed

    elif 'f' in pressed:
        msg.frontLeftSpeed = linear_speed
        msg.frontRightSpeed = -linear_speed
        msg.rearLeftSpeed = linear_speed
        msg.rearRightSpeed = -linear_speed

    else:
        msg.frontLeftSpeed = 0
        msg.frontRightSpeed = 0
        msg.rearLeftSpeed = 0
        msg.rearRightSpeed = 0

    maya.sendConfig(msg)
    showGUI()


# maya.disconnect()
