#!/usr/bin/env python3

import serial, signal

CLOCKWISE = 0
ANTI_CLOCKWISE = 1

keep_running = True

try:
    serialBus = serial.Serial('/dev/ttyUSB1', 115200)
except:
    print("No ha sido posible conectarse con el dispositivo")
    exit(1)


class RobotConfig:
    
    frontRightSpeed = 0
    frontLeftSpeed = 0
    rearRightSpeed = 0
    rearLeftSpeed = 0
    
    frontRightSense = 0
    frontLeftSense = 0
    rearRightSense = 0
    rearLeftSense = 0
    
    frontRightAngle = 0
    frontLeftAngle = 0
    rearRightAngle = 0
    rearLeftAngle = 0


def ctrl_c_handler(signum, frame):
    print("\nConexion closed!")
    serialBus.close()
    exit(0)
 
 
def numTo3bitStr(num):
    return format(num, 'b').zfill(3)

def configToOrders(input):
    
    orders = []
    
    # Movement orders
    orders.append('0000'+ str(input.frontRightSense) + numTo3bitStr(input.frontRightSpeed))
    #orders.append('0001'+ str(input.frontLeftSense) + numTo3bitStr(input.frontLeftSpeed))
    #orders.append('0010'+ str(input.rearRightSense) + numTo3bitStr(input.rearRightSpeed))
    #orders.append('0011'+ str(input.rearLeftSense) + numTo3bitStr(input.rearLeftSpeed))
    
    # Angle orders
    
    # Others
    
    return orders
    

def send(config):
    
    if serialBus.isOpen():
        
        orders = configToOrders(config)
        
        for order in orders:
            serialBus.write(bytes( [int(order, 2)] )) 
              
    else:
        print("Conexion broken!")
        exit(1)


signal.signal(signal.SIGINT, ctrl_c_handler)

while keep_running:
    
    conf = RobotConfig
    
    conf.frontRightSpeed = int(input("Introduce velocidad MOTOR 1 (0-7): "))
    conf.frontRightSense = int(input("Introduce sentido MOTOR 1 (0 o 1): "))
    
    if (conf.frontRightSpeed >= 0 and conf.frontRightSpeed <= 7) and (conf.frontRightSense == 0 or  conf.frontRightSense == 1):
        send(conf)
    else:
        print(conf.frontRightSpeed)
        print(conf.frontRightSense)
        print("Noooo!!!! Solo hay 8 velocidades y 2 sentidos de giro")
    
