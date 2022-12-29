// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from maya_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef MAYA_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_
#define MAYA_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "maya_msgs/msg/detail/sound__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace maya_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sound & msg,
  std::ostream & out)
{
  out << "{";
  // member: tone
  {
    out << "tone: ";
    rosidl_generator_traits::value_to_yaml(msg.tone, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sound & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tone: ";
    rosidl_generator_traits::value_to_yaml(msg.tone, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sound & msg, bool use_flow_style = false)
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
  const maya_msgs::msg::Sound & msg,
  std::ostream & out, size_t indentation = 0)
{
  maya_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use maya_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const maya_msgs::msg::Sound & msg)
{
  return maya_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<maya_msgs::msg::Sound>()
{
  return "maya_msgs::msg::Sound";
}

template<>
inline const char * name<maya_msgs::msg::Sound>()
{
  return "maya_msgs/msg/Sound";
}

template<>
struct has_fixed_size<maya_msgs::msg::Sound>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<maya_msgs::msg::Sound>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<maya_msgs::msg::Sound>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAYA_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_
