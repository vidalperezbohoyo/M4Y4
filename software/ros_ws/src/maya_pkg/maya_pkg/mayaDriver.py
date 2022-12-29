import rclpy
import time
from rclpy.node import Node

from std_msgs.msg import String
from maya_pkg.maya_lib import maya
from maya_msgs.msg import Sound
from maya_msgs.msg import Control

class MayaDriver(Node):

    def __init__(self):
        super().__init__('maya_driver')
        self.control_sub = self.create_subscription(
            Control,
            'maya_control',
            self.control_callback,
            10)
        self.control_sub  # prevent unused variable warning
        
        self.buzzer_sub = self.create_subscription(
            Sound,
            'maya_sound',
            self.buzzer_callback,
            10)
        self.buzzer_sub  # prevent unused variable warning
        
        if not maya.connect():
            print("Unable to connect with Maya! ---> Is Maya connected to '/dev/ttyUSB1'??")
            exit(1)
        
        self.connected_melody()
           
        self.maya_config = maya.RobotConfig()

    def connected_melody():
        config = maya.RobotConfig()
        # SI FA RE 
        config.buzzerToneId = 6
        time.sleep(0.7)
        maya.sendConfig(config)
        
        config.buzzerToneId = 3
        time.sleep(0.7)
        maya.sendConfig(config)
        
        config.buzzerToneId = 1
        time.sleep(0.7)
        maya.sendConfig(config)
    
    def control_callback(self, msg):
        
        self.maya_config.frontRightSpeed = msg.front_right_speed
        self.maya_config.frontLeftSpeed = msg.front_left_speed
        self.maya_config.rearRightSpeed = msg.rear_right_speed
        self.maya_config.rearLeftSpeed = msg.rear_left_speed
        
        self.maya_config.frontRightAngle = msg.front_right_angle
        self.maya_config.frontLeftAngle = msg.front_left_angle
        self.maya_config.rearRightAngle = msg.rear_right_angle
        self.maya_config.rearLeftAngle = msg.rear_left_angle
        
        
        maya.sendConfig(self.maya_config)
    
    def buzzer_callback(self, msg):
           
        self.maya_config.buzzerToneId = msg.tone 
                        
        maya.sendConfig(self.maya_config)
        


def main(args=None):
    rclpy.init(args=args)

    driver_node = MayaDriver()

    rclpy.spin(driver_node)

    driver_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()