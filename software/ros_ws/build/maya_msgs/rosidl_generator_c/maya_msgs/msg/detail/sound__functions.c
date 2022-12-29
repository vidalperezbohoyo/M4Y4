// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from maya_msgs:msg/Sound.idl
// generated code does not contain a copyright notice
#include "maya_msgs/msg/detail/sound__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
maya_msgs__msg__Sound__init(maya_msgs__msg__Sound * msg)
{
  if (!msg) {
    return false;
  }
  // tone
  return true;
}

void
maya_msgs__msg__Sound__fini(maya_msgs__msg__Sound * msg)
{
  if (!msg) {
    return;
  }
  // tone
}

bool
maya_msgs__msg__Sound__are_equal(const maya_msgs__msg__Sound * lhs, const maya_msgs__msg__Sound * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tone
  if (lhs->tone != rhs->tone) {
    return false;
  }
  return true;
}

bool
maya_msgs__msg__Sound__copy(
  const maya_msgs__msg__Sound * input,
  maya_msgs__msg__Sound * output)
{
  if (!input || !output) {
    return false;
  }
  // tone
  output->tone = input->tone;
  return true;
}

maya_msgs__msg__Sound *
maya_msgs__msg__Sound__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maya_msgs__msg__Sound * msg = (maya_msgs__msg__Sound *)allocator.allocate(sizeof(maya_msgs__msg__Sound), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maya_msgs__msg__Sound));
  bool success = maya_msgs__msg__Sound__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maya_msgs__msg__Sound__destroy(maya_msgs__msg__Sound * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maya_msgs__msg__Sound__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maya_msgs__msg__Sound__Sequence__init(maya_msgs__msg__Sound__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maya_msgs__msg__Sound * data = NULL;

  if (size) {
    data = (maya_msgs__msg__Sound *)allocator.zero_allocate(size, sizeof(maya_msgs__msg__Sound), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maya_msgs__msg__Sound__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maya_msgs__msg__Sound__fini(&data[i - 1]);
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
maya_msgs__msg__Sound__Sequence__fini(maya_msgs__msg__Sound__Sequence * array)
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
      maya_msgs__msg__Sound__fini(&array->data[i]);
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

maya_msgs__msg__Sound__Sequence *
maya_msgs__msg__Sound__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maya_msgs__msg__Sound__Sequence * array = (maya_msgs__msg__Sound__Sequence *)allocator.allocate(sizeof(maya_msgs__msg__Sound__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maya_msgs__msg__Sound__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maya_msgs__msg__Sound__Sequence__destroy(maya_msgs__msg__Sound__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maya_msgs__msg__Sound__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maya_msgs__msg__Sound__Sequence__are_equal(const maya_msgs__msg__Sound__Sequence * lhs, const maya_msgs__msg__Sound__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maya_msgs__msg__Sound__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maya_msgs__msg__Sound__Sequence__copy(
  const maya_msgs__msg__Sound__Sequence * input,
  maya_msgs__msg__Sound__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(maya_msgs__msg__Sound);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maya_msgs__msg__Sound * data =
      (maya_msgs__msg__Sound *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maya_msgs__msg__Sound__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maya_msgs__msg__Sound__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maya_msgs__msg__Sound__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
