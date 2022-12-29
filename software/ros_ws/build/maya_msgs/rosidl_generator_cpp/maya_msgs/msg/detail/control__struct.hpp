// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from maya_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MAYA_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
#define MAYA_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__maya_msgs__msg__Control __attribute__((deprecated))
#else
# define DEPRECATED__maya_msgs__msg__Control __declspec(deprecated)
#endif

namespace maya_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Control_
{
  using Type = Control_<ContainerAllocator>;

  explicit Control_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_right_speed = 0ll;
      this->front_left_speed = 0ll;
      this->rear_right_speed = 0ll;
      this->rear_left_speed = 0ll;
      this->front_right_angle = 0ll;
      this->front_left_angle = 0ll;
      this->rear_right_angle = 0ll;
      this->rear_left_angle = 0ll;
    }
  }

  explicit Control_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_right_speed = 0ll;
      this->front_left_speed = 0ll;
      this->rear_right_speed = 0ll;
      this->rear_left_speed = 0ll;
      this->front_right_angle = 0ll;
      this->front_left_angle = 0ll;
      this->rear_right_angle = 0ll;
      this->rear_left_angle = 0ll;
    }
  }

  // field types and members
  using _front_right_speed_type =
    int64_t;
  _front_right_speed_type front_right_speed;
  using _front_left_speed_type =
    int64_t;
  _front_left_speed_type front_left_speed;
  using _rear_right_speed_type =
    int64_t;
  _rear_right_speed_type rear_right_speed;
  using _rear_left_speed_type =
    int64_t;
  _rear_left_speed_type rear_left_speed;
  using _front_right_angle_type =
    int64_t;
  _front_right_angle_type front_right_angle;
  using _front_left_angle_type =
    int64_t;
  _front_left_angle_type front_left_angle;
  using _rear_right_angle_type =
    int64_t;
  _rear_right_angle_type rear_right_angle;
  using _rear_left_angle_type =
    int64_t;
  _rear_left_angle_type rear_left_angle;

  // setters for named parameter idiom
  Type & set__front_right_speed(
    const int64_t & _arg)
  {
    this->front_right_speed = _arg;
    return *this;
  }
  Type & set__front_left_speed(
    const int64_t & _arg)
  {
    this->front_left_speed = _arg;
    return *this;
  }
  Type & set__rear_right_speed(
    const int64_t & _arg)
  {
    this->rear_right_speed = _arg;
    return *this;
  }
  Type & set__rear_left_speed(
    const int64_t & _arg)
  {
    this->rear_left_speed = _arg;
    return *this;
  }
  Type & set__front_right_angle(
    const int64_t & _arg)
  {
    this->front_right_angle = _arg;
    return *this;
  }
  Type & set__front_left_angle(
    const int64_t & _arg)
  {
    this->front_left_angle = _arg;
    return *this;
  }
  Type & set__rear_right_angle(
    const int64_t & _arg)
  {
    this->rear_right_angle = _arg;
    return *this;
  }
  Type & set__rear_left_angle(
    const int64_t & _arg)
  {
    this->rear_left_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    maya_msgs::msg::Control_<ContainerAllocator> *;
  using ConstRawPtr =
    const maya_msgs::msg::Control_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<maya_msgs::msg::Control_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<maya_msgs::msg::Control_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      maya_msgs::msg::Control_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<maya_msgs::msg::Control_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      maya_msgs::msg::Control_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<maya_msgs::msg::Control_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<maya_msgs::msg::Control_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<maya_msgs::msg::Control_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__maya_msgs__msg__Control
    std::shared_ptr<maya_msgs::msg::Control_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__maya_msgs__msg__Control
    std::shared_ptr<maya_msgs::msg::Control_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_ & other) const
  {
    if (this->front_right_speed != other.front_right_speed) {
      return false;
    }
    if (this->front_left_speed != other.front_left_speed) {
      return false;
    }
    if (this->rear_right_speed != other.rear_right_speed) {
      return false;
    }
    if (this->rear_left_speed != other.rear_left_speed) {
      return false;
    }
    if (this->front_right_angle != other.front_right_angle) {
      return false;
    }
    if (this->front_left_angle != other.front_left_angle) {
      return false;
    }
    if (this->rear_right_angle != other.rear_right_angle) {
      return false;
    }
    if (this->rear_left_angle != other.rear_left_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_

// alias to use template instance with default allocator
using Control =
  maya_msgs::msg::Control_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace maya_msgs

#endif  // MAYA_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
