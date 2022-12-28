import serial, math

# Degree:index
servoPositions = [0, 15, 30, 45, 60, 70, 80, 90, 100, 110, 120, 135, 150, 165, 180, 180]

serialBus = None

class RobotConfig:
    
    frontRightSpeed = 0
    frontLeftSpeed = 0
    rearRightSpeed = 0
    rearLeftSpeed = 0
        
    frontRightAngle = 0
    frontLeftAngle = 0
    rearRightAngle = 0
    rearLeftAngle = 0
    
    buzzerToneId = 0 # Off

def connect():
    global serialBus
    
    connected = True
    try:
        serialBus = serial.Serial('/dev/ttyUSB1', 115200)
    except:
        connected = False

    return connected

def disconnect():
    global serialBus
    serialBus.close()
    
def sendConfig(config):
    global serialBus
    
    if serialBus.isOpen():
        
        orders = configToOrders(config)
        
        for order in orders:
            serialBus.write(bytes( [int(order, 2)] ))       
    else:
        return False
    
    return True

def numTo3bitStr(num):
    return format(num, 'b').zfill(3)

def numTo4bitStr(num):
    return format(num, 'b').zfill(4)

def wheelSense(speed):
    if speed > 0:
        return 0
    else:
        return 1
    
    
def degToServoPosition(degrees):
    
    # Transform to servo referece system
        
    # Angle in must be from 90 to -90
    if (degrees > 90 or degrees < -90):
        print("Wheel angles must be between [90º and -90º]")
        exit(1)
    degrees = 90 - int(degrees)
    
    closest = min(servoPositions, key=lambda angle: math.sqrt((degrees)^2 + (angle)^2))

    return servoPositions.index(closest)

def configToOrders(input):
    
    orders = []
    
    # Movement orders
    orders.append('0000'+ str(wheelSense(input.frontRightSpeed)) + numTo3bitStr(abs(input.frontRightSpeed)))
    orders.append('0001'+ str(wheelSense(input.frontLeftSpeed)) + numTo3bitStr(abs(input.frontLeftSpeed)))
    orders.append('0010'+ str(wheelSense(input.rearRightSpeed)) + numTo3bitStr(abs(input.rearRightSpeed)))
    orders.append('0011'+ str(wheelSense(input.rearLeftSpeed)) + numTo3bitStr(abs(input.rearLeftSpeed)))
    
    # Angle orders
    orders.append('0100' + numTo4bitStr(degToServoPosition(input.frontRightAngle)))
    orders.append('0101' + numTo4bitStr(degToServoPosition(input.frontLeftAngle)))
    orders.append('0110' + numTo4bitStr(degToServoPosition(input.rearRightAngle)))
    orders.append('0111' + numTo4bitStr(degToServoPosition(input.rearLeftAngle)))
    # Others
    
    # Buzzer
    orders.append('10' + format(input.buzzerToneId, 'b').zfill(6))
    
    return orders