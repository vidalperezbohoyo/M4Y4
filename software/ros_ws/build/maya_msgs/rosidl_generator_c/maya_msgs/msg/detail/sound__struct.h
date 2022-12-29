// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from maya_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef MAYA_MSGS__MSG__DETAIL__SOUND__STRUCT_H_
#define MAYA_MSGS__MSG__DETAIL__SOUND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DO'.
enum
{
  maya_msgs__msg__Sound__DO = 0ll
};

/// Constant 'RE'.
enum
{
  maya_msgs__msg__Sound__RE = 1ll
};

/// Constant 'MI'.
enum
{
  maya_msgs__msg__Sound__MI = 2ll
};

/// Constant 'FA'.
enum
{
  maya_msgs__msg__Sound__FA = 3ll
};

/// Constant 'SOL'.
enum
{
  maya_msgs__msg__Sound__SOL = 4ll
};

/// Constant 'LA'.
enum
{
  maya_msgs__msg__Sound__LA = 5ll
};

/// Constant 'SI'.
enum
{
  maya_msgs__msg__Sound__SI = 6ll
};

/// Struct defined in msg/Sound in the package maya_msgs.
typedef struct maya_msgs__msg__Sound
{
  int64_t tone;
} maya_msgs__msg__Sound;

// Struct for a sequence of maya_msgs__msg__Sound.
typedef struct maya_msgs__msg__Sound__Sequence
{
  maya_msgs__msg__Sound * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maya_msgs__msg__Sound__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAYA_MSGS__MSG__DETAIL__SOUND__STRUCT_H_
