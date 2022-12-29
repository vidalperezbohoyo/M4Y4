// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from maya_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef MAYA_MSGS__MSG__DETAIL__SOUND__STRUCT_HPP_
#define MAYA_MSGS__MSG__DETAIL__SOUND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__maya_msgs__msg__Sound __attribute__((deprecated))
#else
# define DEPRECATED__maya_msgs__msg__Sound __declspec(deprecated)
#endif

namespace maya_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sound_
{
  using Type = Sound_<ContainerAllocator>;

  explicit Sound_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tone = 0ll;
    }
  }

  explicit Sound_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tone = 0ll;
    }
  }

  // field types and members
  using _tone_type =
    int64_t;
  _tone_type tone;

  // setters for named parameter idiom
  Type & set__tone(
    const int64_t & _arg)
  {
    this->tone = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int64_t DO =
    0;
  static constexpr int64_t RE =
    1;
  static constexpr int64_t MI =
    2;
  static constexpr int64_t FA =
    3;
  static constexpr int64_t SOL =
    4;
  static constexpr int64_t LA =
    5;
  static constexpr int64_t SI =
    6;

  // pointer types
  using RawPtr =
    maya_msgs::msg::Sound_<ContainerAllocator> *;
  using ConstRawPtr =
    const maya_msgs::msg::Sound_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<maya_msgs::msg::Sound_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<maya_msgs::msg::Sound_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      maya_msgs::msg::Sound_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<maya_msgs::msg::Sound_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      maya_msgs::msg::Sound_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<maya_msgs::msg::Sound_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<maya_msgs::msg::Sound_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<maya_msgs::msg::Sound_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__maya_msgs__msg__Sound
    std::shared_ptr<maya_msgs::msg::Sound_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__maya_msgs__msg__Sound
    std::shared_ptr<maya_msgs::msg::Sound_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sound_ & other) const
  {
    if (this->tone != other.tone) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sound_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sound_

// alias to use template instance with default allocator
using Sound =
  maya_msgs::msg::Sound_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int64_t Sound_<ContainerAllocator>::DO;
template<typename ContainerAllocator>
constexpr int64_t Sound_<ContainerAllocator>::RE;
template<typename ContainerAllocator>
constexpr int64_t Sound_<ContainerAllocator>::MI;
template<typename ContainerAllocator>
constexpr int64_t Sound_<ContainerAllocator>::FA;
template<typename ContainerAllocator>
constexpr int64_t Sound_<ContainerAllocator>::SOL;
template<typename ContainerAllocator>
constexpr int64_t Sound_<ContainerAllocator>::LA;
template<typename ContainerAllocator>
constexpr int64_t Sound_<ContainerAllocator>::SI;

}  // namespace msg

}  // namespace maya_msgs

#endif  // MAYA_MSGS__MSG__DETAIL__SOUND__STRUCT_HPP_
