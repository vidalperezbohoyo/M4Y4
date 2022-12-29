import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from maya_pkg.maya_lib import maya
from maya_msgs.msg import Sound

class MayaDriver(Node):

    def __init__(self):
        super().__init__('maya_driver')
        self.control_sub = self.create_subscription(
            String,
            'maya_control',
            self.control_callback,
            10)
        self.control_sub  # prevent unused variable warning
        
        self.buzzer_sub = self.create_subscription(
            String,
            'maya_buzzer',
            self.buzzer_callback,
            10)
        self.buzzer_sub  # prevent unused variable warning
        
        if not maya.connect():
            print("Unable to connect with maya")
            exit(1)
            
        self.maya_msg = maya.RobotConfig()

    def control_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)
        

        
        
        maya.sendConfig(self.maya_msg)
    
    def buzzer_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)
        
                
        maya.sendConfig(self.maya_msg)
        


def main(args=None):
    rclpy.init(args=args)

    driver_node = MayaDriver()

    rclpy.spin(driver_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    driver_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()