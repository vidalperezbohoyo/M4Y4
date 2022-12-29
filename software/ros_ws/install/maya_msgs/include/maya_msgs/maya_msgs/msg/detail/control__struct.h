// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from maya_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MAYA_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_
#define MAYA_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Control in the package maya_msgs.
typedef struct maya_msgs__msg__Control
{
  int64_t front_right_speed;
  int64_t front_left_speed;
  int64_t rear_right_speed;
  int64_t rear_left_speed;
  int64_t front_right_angle;
  int64_t front_left_angle;
  int64_t rear_right_angle;
  int64_t rear_left_angle;
} maya_msgs__msg__Control;

// Struct for a sequence of maya_msgs__msg__Control.
typedef struct maya_msgs__msg__Control__Sequence
{
  maya_msgs__msg__Control * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maya_msgs__msg__Control__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAYA_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_
