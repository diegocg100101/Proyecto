// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kalanchoe_interface:msg/Measure.idl
// generated code does not contain a copyright notice
#include "kalanchoe_interface/msg/detail/measure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
kalanchoe_interface__msg__Measure__init(kalanchoe_interface__msg__Measure * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // value
  return true;
}

void
kalanchoe_interface__msg__Measure__fini(kalanchoe_interface__msg__Measure * msg)
{
  if (!msg) {
    return;
  }
  // time
  // value
}

bool
kalanchoe_interface__msg__Measure__are_equal(const kalanchoe_interface__msg__Measure * lhs, const kalanchoe_interface__msg__Measure * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
kalanchoe_interface__msg__Measure__copy(
  const kalanchoe_interface__msg__Measure * input,
  kalanchoe_interface__msg__Measure * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  // value
  output->value = input->value;
  return true;
}

kalanchoe_interface__msg__Measure *
kalanchoe_interface__msg__Measure__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kalanchoe_interface__msg__Measure * msg = (kalanchoe_interface__msg__Measure *)allocator.allocate(sizeof(kalanchoe_interface__msg__Measure), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kalanchoe_interface__msg__Measure));
  bool success = kalanchoe_interface__msg__Measure__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kalanchoe_interface__msg__Measure__destroy(kalanchoe_interface__msg__Measure * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kalanchoe_interface__msg__Measure__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kalanchoe_interface__msg__Measure__Sequence__init(kalanchoe_interface__msg__Measure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kalanchoe_interface__msg__Measure * data = NULL;

  if (size) {
    data = (kalanchoe_interface__msg__Measure *)allocator.zero_allocate(size, sizeof(kalanchoe_interface__msg__Measure), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kalanchoe_interface__msg__Measure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kalanchoe_interface__msg__Measure__fini(&data[i - 1]);
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
kalanchoe_interface__msg__Measure__Sequence__fini(kalanchoe_interface__msg__Measure__Sequence * array)
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
      kalanchoe_interface__msg__Measure__fini(&array->data[i]);
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

kalanchoe_interface__msg__Measure__Sequence *
kalanchoe_interface__msg__Measure__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kalanchoe_interface__msg__Measure__Sequence * array = (kalanchoe_interface__msg__Measure__Sequence *)allocator.allocate(sizeof(kalanchoe_interface__msg__Measure__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kalanchoe_interface__msg__Measure__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kalanchoe_interface__msg__Measure__Sequence__destroy(kalanchoe_interface__msg__Measure__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kalanchoe_interface__msg__Measure__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kalanchoe_interface__msg__Measure__Sequence__are_equal(const kalanchoe_interface__msg__Measure__Sequence * lhs, const kalanchoe_interface__msg__Measure__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kalanchoe_interface__msg__Measure__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kalanchoe_interface__msg__Measure__Sequence__copy(
  const kalanchoe_interface__msg__Measure__Sequence * input,
  kalanchoe_interface__msg__Measure__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kalanchoe_interface__msg__Measure);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kalanchoe_interface__msg__Measure * data =
      (kalanchoe_interface__msg__Measure *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kalanchoe_interface__msg__Measure__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kalanchoe_interface__msg__Measure__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kalanchoe_interface__msg__Measure__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
