import serial

CLOCKWISE = 0
ANTI_CLOCKWISE = 1

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

def wheelSense(speed):
    if speed > 0:
        return 0
    else:
        return 1
    
def configToOrders(input):
    
    orders = []
    
    # Movement orders
    orders.append('0000'+ str(wheelSense(input.frontRightSpeed)) + numTo3bitStr(abs(input.frontRightSpeed)))
    #orders.append('0001'+ str(input.frontLeftSense) + numTo3bitStr(input.frontLeftSpeed))
    #orders.append('0010'+ str(input.rearRightSense) + numTo3bitStr(input.rearRightSpeed))
    #orders.append('0011'+ str(input.rearLeftSense) + numTo3bitStr(input.rearLeftSpeed))
    
    # Angle orders
    
    # Others
    
    return orders