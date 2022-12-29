// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from maya_msgs:msg/Control.idl
// generated code does not contain a copyright notice
#include "maya_msgs/msg/detail/control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
maya_msgs__msg__Control__init(maya_msgs__msg__Control * msg)
{
  if (!msg) {
    return false;
  }
  // front_right_speed
  // front_left_speed
  // rear_right_speed
  // rear_left_speed
  // front_right_angle
  // front_left_angle
  // rear_right_angle
  // rear_left_angle
  return true;
}

void
maya_msgs__msg__Control__fini(maya_msgs__msg__Control * msg)
{
  if (!msg) {
    return;
  }
  // front_right_speed
  // front_left_speed
  // rear_right_speed
  // rear_left_speed
  // front_right_angle
  // front_left_angle
  // rear_right_angle
  // rear_left_angle
}

bool
maya_msgs__msg__Control__are_equal(const maya_msgs__msg__Control * lhs, const maya_msgs__msg__Control * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front_right_speed
  if (lhs->front_right_speed != rhs->front_right_speed) {
    return false;
  }
  // front_left_speed
  if (lhs->front_left_speed != rhs->front_left_speed) {
    return false;
  }
  // rear_right_speed
  if (lhs->rear_right_speed != rhs->rear_right_speed) {
    return false;
  }
  // rear_left_speed
  if (lhs->rear_left_speed != rhs->rear_left_speed) {
    return false;
  }
  // front_right_angle
  if (lhs->front_right_angle != rhs->front_right_angle) {
    return false;
  }
  // front_left_angle
  if (lhs->front_left_angle != rhs->front_left_angle) {
    return false;
  }
  // rear_right_angle
  if (lhs->rear_right_angle != rhs->rear_right_angle) {
    return false;
  }
  // rear_left_angle
  if (lhs->rear_left_angle != rhs->rear_left_angle) {
    return false;
  }
  return true;
}

bool
maya_msgs__msg__Control__copy(
  const maya_msgs__msg__Control * input,
  maya_msgs__msg__Control * output)
{
  if (!input || !output) {
    return false;
  }
  // front_right_speed
  output->front_right_speed = input->front_right_speed;
  // front_left_speed
  output->front_left_speed = input->front_left_speed;
  // rear_right_speed
  output->rear_right_speed = input->rear_right_speed;
  // rear_left_speed
  output->rear_left_speed = input->rear_left_speed;
  // front_right_angle
  output->front_right_angle = input->front_right_angle;
  // front_left_angle
  output->front_left_angle = input->front_left_angle;
  // rear_right_angle
  output->rear_right_angle = input->rear_right_angle;
  // rear_left_angle
  output->rear_left_angle = input->rear_left_angle;
  return true;
}

maya_msgs__msg__Control *
maya_msgs__msg__Control__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maya_msgs__msg__Control * msg = (maya_msgs__msg__Control *)allocator.allocate(sizeof(maya_msgs__msg__Control), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maya_msgs__msg__Control));
  bool success = maya_msgs__msg__Control__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maya_msgs__msg__Control__destroy(maya_msgs__msg__Control * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maya_msgs__msg__Control__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maya_msgs__msg__Control__Sequence__init(maya_msgs__msg__Control__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maya_msgs__msg__Control * data = NULL;

  if (size) {
    data = (maya_msgs__msg__Control *)allocator.zero_allocate(size, sizeof(maya_msgs__msg__Control), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maya_msgs__msg__Control__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maya_msgs__msg__Control__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
maya_msgs__msg__Control__Sequence__fini(maya_msgs__msg__Control__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      maya_msgs__msg__Control__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

maya_msgs__msg__Control__Sequence *
maya_msgs__msg__Control__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maya_msgs__msg__Control__Sequence * array = (maya_msgs__msg__Control__Sequence *)allocator.allocate(sizeof(maya_msgs__msg__Control__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maya_msgs__msg__Control__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maya_msgs__msg__Control__Sequence__destroy(maya_msgs__msg__Control__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maya_msgs__msg__Control__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maya_msgs__msg__Control__Sequence__are_equal(const maya_msgs__msg__Control__Sequence * lhs, const maya_msgs__msg__Control__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maya_msgs__msg__Control__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maya_msgs__msg__Control__Sequence__copy(
  const maya_msgs__msg__Control__Sequence * input,
  maya_msgs__msg__Control__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(maya_msgs__msg__Control);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maya_msgs__msg__Control * data =
      (maya_msgs__msg__Control *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maya_msgs__msg__Control__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maya_msgs__msg__Control__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maya_msgs__msg__Control__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
