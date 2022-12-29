// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from maya_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef MAYA_MSGS__MSG__DETAIL__SOUND__BUILDER_HPP_
#define MAYA_MSGS__MSG__DETAIL__SOUND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "maya_msgs/msg/detail/sound__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace maya_msgs
{

namespace msg
{

namespace builder
{

class Init_Sound_tone
{
public:
  Init_Sound_tone()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::maya_msgs::msg::Sound tone(::maya_msgs::msg::Sound::_tone_type arg)
  {
    msg_.tone = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maya_msgs::msg::Sound msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::maya_msgs::msg::Sound>()
{
  return maya_msgs::msg::builder::Init_Sound_tone();
}

}  // namespace maya_msgs

#endif  // MAYA_MSGS__MSG__DETAIL__SOUND__BUILDER_HPP_
