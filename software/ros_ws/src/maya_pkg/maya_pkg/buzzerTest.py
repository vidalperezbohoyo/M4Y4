import rclpy
from rclpy.node import Node

from maya_msgs.msg import Sound

class MelodyMaker(Node):

    def __init__(self):
        super().__init__('maya_melody')
        
        self.publisher_ = self.create_publisher(Sound, 'maya_sound', 10)
        timer_period = 0.4  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 1

    def timer_callback(self):
        msg = Sound()
        
        if self.i == 8:
       	    msg.tone = 0 # OFF
       	    self.publisher_.publish(msg)
       	    exit(0)
       	    
       	msg.tone = self.i 	
        self.publisher_.publish(msg)
        self.i += 1
        
       	    
   
       
def main(args=None):
    rclpy.init(args=args)

    melody_node = MelodyMaker()

    rclpy.spin(melody_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    melody_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
