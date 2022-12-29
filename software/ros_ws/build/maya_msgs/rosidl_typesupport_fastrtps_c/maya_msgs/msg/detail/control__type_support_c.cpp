// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from maya_msgs:msg/Control.idl
// generated code does not contain a copyright notice
#include "maya_msgs/msg/detail/control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "maya_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "maya_msgs/msg/detail/control__struct.h"
#include "maya_msgs/msg/detail/control__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Control__ros_msg_type = maya_msgs__msg__Control;

static bool _Control__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Control__ros_msg_type * ros_message = static_cast<const _Control__ros_msg_type *>(untyped_ros_message);
  // Field name: front_right_speed
  {
    cdr << ros_message->front_right_speed;
  }

  // Field name: front_left_speed
  {
    cdr << ros_message->front_left_speed;
  }

  // Field name: rear_right_speed
  {
    cdr << ros_message->rear_right_speed;
  }

  // Field name: rear_left_speed
  {
    cdr << ros_message->rear_left_speed;
  }

  // Field name: front_right_angle
  {
    cdr << ros_message->front_right_angle;
  }

  // Field name: front_left_angle
  {
    cdr << ros_message->front_left_angle;
  }

  // Field name: rear_right_angle
  {
    cdr << ros_message->rear_right_angle;
  }

  // Field name: rear_left_angle
  {
    cdr << ros_message->rear_left_angle;
  }

  return true;
}

static bool _Control__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Control__ros_msg_type * ros_message = static_cast<_Control__ros_msg_type *>(untyped_ros_message);
  // Field name: front_right_speed
  {
    cdr >> ros_message->front_right_speed;
  }

  // Field name: front_left_speed
  {
    cdr >> ros_message->front_left_speed;
  }

  // Field name: rear_right_speed
  {
    cdr >> ros_message->rear_right_speed;
  }

  // Field name: rear_left_speed
  {
    cdr >> ros_message->rear_left_speed;
  }

  // Field name: front_right_angle
  {
    cdr >> ros_message->front_right_angle;
  }

  // Field name: front_left_angle
  {
    cdr >> ros_message->front_left_angle;
  }

  // Field name: rear_right_angle
  {
    cdr >> ros_message->rear_right_angle;
  }

  // Field name: rear_left_angle
  {
    cdr >> ros_message->rear_left_angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_maya_msgs
size_t get_serialized_size_maya_msgs__msg__Control(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Control__ros_msg_type * ros_message = static_cast<const _Control__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name front_right_speed
  {
    size_t item_size = sizeof(ros_message->front_right_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_left_speed
  {
    size_t item_size = sizeof(ros_message->front_left_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_right_speed
  {
    size_t item_size = sizeof(ros_message->rear_right_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_left_speed
  {
    size_t item_size = sizeof(ros_message->rear_left_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_right_angle
  {
    size_t item_size = sizeof(ros_message->front_right_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_left_angle
  {
    size_t item_size = sizeof(ros_message->front_left_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_right_angle
  {
    size_t item_size = sizeof(ros_message->rear_right_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_left_angle
  {
    size_t item_size = sizeof(ros_message->rear_left_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Control__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_maya_msgs__msg__Control(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_maya_msgs
size_t max_serialized_size_maya_msgs__msg__Control(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: front_right_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_left_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_right_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_left_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_right_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_left_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_right_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rear_left_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Control__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_maya_msgs__msg__Control(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Control = {
  "maya_msgs::msg",
  "Control",
  _Control__cdr_serialize,
  _Control__cdr_deserialize,
  _Control__get_serialized_size,
  _Control__max_serialized_size
};

static rosidl_message_type_support_t _Control__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Control,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maya_msgs, msg, Control)() {
  return &_Control__type_support;
}

#if defined(__cplusplus)
}
#endif
