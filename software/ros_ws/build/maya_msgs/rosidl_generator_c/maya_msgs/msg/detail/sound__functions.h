// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from maya_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef MAYA_MSGS__MSG__DETAIL__SOUND__FUNCTIONS_H_
#define MAYA_MSGS__MSG__DETAIL__SOUND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "maya_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "maya_msgs/msg/detail/sound__struct.h"

/// Initialize msg/Sound message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * maya_msgs__msg__Sound
 * )) before or use
 * maya_msgs__msg__Sound__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
bool
maya_msgs__msg__Sound__init(maya_msgs__msg__Sound * msg);

/// Finalize msg/Sound message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
void
maya_msgs__msg__Sound__fini(maya_msgs__msg__Sound * msg);

/// Create msg/Sound message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * maya_msgs__msg__Sound__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
maya_msgs__msg__Sound *
maya_msgs__msg__Sound__create();

/// Destroy msg/Sound message.
/**
 * It calls
 * maya_msgs__msg__Sound__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
void
maya_msgs__msg__Sound__destroy(maya_msgs__msg__Sound * msg);

/// Check for msg/Sound message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
bool
maya_msgs__msg__Sound__are_equal(const maya_msgs__msg__Sound * lhs, const maya_msgs__msg__Sound * rhs);

/// Copy a msg/Sound message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
bool
maya_msgs__msg__Sound__copy(
  const maya_msgs__msg__Sound * input,
  maya_msgs__msg__Sound * output);

/// Initialize array of msg/Sound messages.
/**
 * It allocates the memory for the number of elements and calls
 * maya_msgs__msg__Sound__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
bool
maya_msgs__msg__Sound__Sequence__init(maya_msgs__msg__Sound__Sequence * array, size_t size);

/// Finalize array of msg/Sound messages.
/**
 * It calls
 * maya_msgs__msg__Sound__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
void
maya_msgs__msg__Sound__Sequence__fini(maya_msgs__msg__Sound__Sequence * array);

/// Create array of msg/Sound messages.
/**
 * It allocates the memory for the array and calls
 * maya_msgs__msg__Sound__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
maya_msgs__msg__Sound__Sequence *
maya_msgs__msg__Sound__Sequence__create(size_t size);

/// Destroy array of msg/Sound messages.
/**
 * It calls
 * maya_msgs__msg__Sound__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
void
maya_msgs__msg__Sound__Sequence__destroy(maya_msgs__msg__Sound__Sequence * array);

/// Check for msg/Sound message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
bool
maya_msgs__msg__Sound__Sequence__are_equal(const maya_msgs__msg__Sound__Sequence * lhs, const maya_msgs__msg__Sound__Sequence * rhs);

/// Copy an array of msg/Sound messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_maya_msgs
bool
maya_msgs__msg__Sound__Sequence__copy(
  const maya_msgs__msg__Sound__Sequence * input,
  maya_msgs__msg__Sound__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MAYA_MSGS__MSG__DETAIL__SOUND__FUNCTIONS_H_
