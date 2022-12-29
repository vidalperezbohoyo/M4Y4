// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from maya_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MAYA_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
#define MAYA_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "maya_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace maya_msgs
{

namespace msg
{

namespace builder
{

class Init_Control_rear_left_angle
{
public:
  explicit Init_Control_rear_left_angle(::maya_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  ::maya_msgs::msg::Control rear_left_angle(::maya_msgs::msg::Control::_rear_left_angle_type arg)
  {
    msg_.rear_left_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maya_msgs::msg::Control msg_;
};

class Init_Control_rear_right_angle
{
public:
  explicit Init_Control_rear_right_angle(::maya_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_rear_left_angle rear_right_angle(::maya_msgs::msg::Control::_rear_right_angle_type arg)
  {
    msg_.rear_right_angle = std::move(arg);
    return Init_Control_rear_left_angle(msg_);
  }

private:
  ::maya_msgs::msg::Control msg_;
};

class Init_Control_front_left_angle
{
public:
  explicit Init_Control_front_left_angle(::maya_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_rear_right_angle front_left_angle(::maya_msgs::msg::Control::_front_left_angle_type arg)
  {
    msg_.front_left_angle = std::move(arg);
    return Init_Control_rear_right_angle(msg_);
  }

private:
  ::maya_msgs::msg::Control msg_;
};

class Init_Control_front_right_angle
{
public:
  explicit Init_Control_front_right_angle(::maya_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_front_left_angle front_right_angle(::maya_msgs::msg::Control::_front_right_angle_type arg)
  {
    msg_.front_right_angle = std::move(arg);
    return Init_Control_front_left_angle(msg_);
  }

private:
  ::maya_msgs::msg::Control msg_;
};

class Init_Control_rear_left_speed
{
public:
  explicit Init_Control_rear_left_speed(::maya_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_front_right_angle rear_left_speed(::maya_msgs::msg::Control::_rear_left_speed_type arg)
  {
    msg_.rear_left_speed = std::move(arg);
    return Init_Control_front_right_angle(msg_);
  }

private:
  ::maya_msgs::msg::Control msg_;
};

class Init_Control_rear_right_speed
{
public:
  explicit Init_Control_rear_right_speed(::maya_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_rear_left_speed rear_right_speed(::maya_msgs::msg::Control::_rear_right_speed_type arg)
  {
    msg_.rear_right_speed = std::move(arg);
    return Init_Control_rear_left_speed(msg_);
  }

private:
  ::maya_msgs::msg::Control msg_;
};

class Init_Control_front_left_speed
{
public:
  explicit Init_Control_front_left_speed(::maya_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_rear_right_speed front_left_speed(::maya_msgs::msg::Control::_front_left_speed_type arg)
  {
    msg_.front_left_speed = std::move(arg);
    return Init_Control_rear_right_speed(msg_);
  }

private:
  ::maya_msgs::msg::Control msg_;
};

class Init_Control_front_right_speed
{
public:
  Init_Control_front_right_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_front_left_speed front_right_speed(::maya_msgs::msg::Control::_front_right_speed_type arg)
  {
    msg_.front_right_speed = std::move(arg);
    return Init_Control_front_left_speed(msg_);
  }

private:
  ::maya_msgs::msg::Control msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::maya_msgs::msg::Control>()
{
  return maya_msgs::msg::builder::Init_Control_front_right_speed();
}

}  // namespace maya_msgs

#endif  // MAYA_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
