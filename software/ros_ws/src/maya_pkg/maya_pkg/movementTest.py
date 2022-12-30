import rclpy
from rclpy.node import Node

from maya_msgs.msg import Control


class Movement(Node):

    def __init__(self):
        super().__init__('maya_control')

        self.publisher_ = self.create_publisher(Control, 'maya_control', 10)
        timer_period = 3  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 1

    def fillMsg(speed=0, angles_list=[0, 0, 0, 0]):
        msg = Control()

        msg.front_right_speed = speed
        msg.front_left_speed = speed
        msg.rear_right_speed = speed
        msg.rear_left_speed = speed

        msg.front_right_angle = angles_list[0]
        msg.front_left_angle = angles_list[1]
        msg.rear_right_angle = angles_list[2]
        msg.rear_left_angle = angles_list[3]

        return msg

    def timer_callback(self):

        if self.i == 1:
            msg = self.fillMsg(1)
            self.publisher_.publish(msg)
        elif self.i == 2:
            msg = self.fillMsg(1, [30, 30, 0, 0])
            self.publisher_.publish(msg)
        elif self.i == 3:
            msg = self.fillMsg(1, [-30, -30, 0, 0])
            self.publisher_.publish(msg)
        elif self.i == 4:
            msg = self.fillMsg(2, [-45, 45, 45, -45])
            self.publisher_.publish(msg)
        else:
            msg = self.fillMsg()
            self.publisher_.publish(msg)
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    movement_node = Movement()

    rclpy.spin(movement_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    movement_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
