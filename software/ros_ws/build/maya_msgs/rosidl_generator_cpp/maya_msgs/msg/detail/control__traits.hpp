// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from maya_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MAYA_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
#define MAYA_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "maya_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace maya_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Control & msg,
  std::ostream & out)
{
  out << "{";
  // member: front_right_speed
  {
    out << "front_right_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_speed, out);
    out << ", ";
  }

  // member: front_left_speed
  {
    out << "front_left_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_speed, out);
    out << ", ";
  }

  // member: rear_right_speed
  {
    out << "rear_right_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right_speed, out);
    out << ", ";
  }

  // member: rear_left_speed
  {
    out << "rear_left_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left_speed, out);
    out << ", ";
  }

  // member: front_right_angle
  {
    out << "front_right_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_angle, out);
    out << ", ";
  }

  // member: front_left_angle
  {
    out << "front_left_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_angle, out);
    out << ", ";
  }

  // member: rear_right_angle
  {
    out << "rear_right_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right_angle, out);
    out << ", ";
  }

  // member: rear_left_angle
  {
    out << "rear_left_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: front_right_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_speed, out);
    out << "\n";
  }

  // member: front_left_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_speed, out);
    out << "\n";
  }

  // member: rear_right_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right_speed, out);
    out << "\n";
  }

  // member: rear_left_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left_speed, out);
    out << "\n";
  }

  // member: front_right_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_angle, out);
    out << "\n";
  }

  // member: front_left_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_angle, out);
    out << "\n";
  }

  // member: rear_right_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right_angle, out);
    out << "\n";
  }

  // member: rear_left_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Control & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace maya_msgs

namespace rosidl_generator_traits
{

[[deprecated("use maya_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const maya_msgs::msg::Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  maya_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maya_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const maya_msgs::msg::Control & msg)
{
  return maya_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<maya_msgs::msg::Control>()
{
  return "maya_msgs::msg::Control";
}

template<>
inline const char * name<maya_msgs::msg::Control>()
{
  return "maya_msgs/msg/Control";
}

template<>
struct has_fixed_size<maya_msgs::msg::Control>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<maya_msgs::msg::Control>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<maya_msgs::msg::Control>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAYA_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
