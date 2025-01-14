// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from station_interface:srv/Reload.idl
// generated code does not contain a copyright notice
#include "station_interface/srv/detail/reload__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
station_interface__srv__Reload_Request__init(station_interface__srv__Reload_Request * msg)
{
  if (!msg) {
    return false;
  }
  // load
  // id
  return true;
}

void
station_interface__srv__Reload_Request__fini(station_interface__srv__Reload_Request * msg)
{
  if (!msg) {
    return;
  }
  // load
  // id
}

bool
station_interface__srv__Reload_Request__are_equal(const station_interface__srv__Reload_Request * lhs, const station_interface__srv__Reload_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // load
  if (lhs->load != rhs->load) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
station_interface__srv__Reload_Request__copy(
  const station_interface__srv__Reload_Request * input,
  station_interface__srv__Reload_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // load
  output->load = input->load;
  // id
  output->id = input->id;
  return true;
}

station_interface__srv__Reload_Request *
station_interface__srv__Reload_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  station_interface__srv__Reload_Request * msg = (station_interface__srv__Reload_Request *)allocator.allocate(sizeof(station_interface__srv__Reload_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(station_interface__srv__Reload_Request));
  bool success = station_interface__srv__Reload_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
station_interface__srv__Reload_Request__destroy(station_interface__srv__Reload_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    station_interface__srv__Reload_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
station_interface__srv__Reload_Request__Sequence__init(station_interface__srv__Reload_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  station_interface__srv__Reload_Request * data = NULL;

  if (size) {
    data = (station_interface__srv__Reload_Request *)allocator.zero_allocate(size, sizeof(station_interface__srv__Reload_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = station_interface__srv__Reload_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        station_interface__srv__Reload_Request__fini(&data[i - 1]);
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
station_interface__srv__Reload_Request__Sequence__fini(station_interface__srv__Reload_Request__Sequence * array)
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
      station_interface__srv__Reload_Request__fini(&array->data[i]);
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

station_interface__srv__Reload_Request__Sequence *
station_interface__srv__Reload_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  station_interface__srv__Reload_Request__Sequence * array = (station_interface__srv__Reload_Request__Sequence *)allocator.allocate(sizeof(station_interface__srv__Reload_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = station_interface__srv__Reload_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
station_interface__srv__Reload_Request__Sequence__destroy(station_interface__srv__Reload_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    station_interface__srv__Reload_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
station_interface__srv__Reload_Request__Sequence__are_equal(const station_interface__srv__Reload_Request__Sequence * lhs, const station_interface__srv__Reload_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!station_interface__srv__Reload_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
station_interface__srv__Reload_Request__Sequence__copy(
  const station_interface__srv__Reload_Request__Sequence * input,
  station_interface__srv__Reload_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(station_interface__srv__Reload_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    station_interface__srv__Reload_Request * data =
      (station_interface__srv__Reload_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!station_interface__srv__Reload_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          station_interface__srv__Reload_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!station_interface__srv__Reload_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
station_interface__srv__Reload_Response__init(station_interface__srv__Reload_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // time
  // libre
  return true;
}

void
station_interface__srv__Reload_Response__fini(station_interface__srv__Reload_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // time
  // libre
}

bool
station_interface__srv__Reload_Response__are_equal(const station_interface__srv__Reload_Response * lhs, const station_interface__srv__Reload_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // libre
  if (lhs->libre != rhs->libre) {
    return false;
  }
  return true;
}

bool
station_interface__srv__Reload_Response__copy(
  const station_interface__srv__Reload_Response * input,
  station_interface__srv__Reload_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // time
  output->time = input->time;
  // libre
  output->libre = input->libre;
  return true;
}

station_interface__srv__Reload_Response *
station_interface__srv__Reload_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  station_interface__srv__Reload_Response * msg = (station_interface__srv__Reload_Response *)allocator.allocate(sizeof(station_interface__srv__Reload_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(station_interface__srv__Reload_Response));
  bool success = station_interface__srv__Reload_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
station_interface__srv__Reload_Response__destroy(station_interface__srv__Reload_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    station_interface__srv__Reload_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
station_interface__srv__Reload_Response__Sequence__init(station_interface__srv__Reload_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  station_interface__srv__Reload_Response * data = NULL;

  if (size) {
    data = (station_interface__srv__Reload_Response *)allocator.zero_allocate(size, sizeof(station_interface__srv__Reload_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = station_interface__srv__Reload_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        station_interface__srv__Reload_Response__fini(&data[i - 1]);
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
station_interface__srv__Reload_Response__Sequence__fini(station_interface__srv__Reload_Response__Sequence * array)
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
      station_interface__srv__Reload_Response__fini(&array->data[i]);
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

station_interface__srv__Reload_Response__Sequence *
station_interface__srv__Reload_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  station_interface__srv__Reload_Response__Sequence * array = (station_interface__srv__Reload_Response__Sequence *)allocator.allocate(sizeof(station_interface__srv__Reload_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = station_interface__srv__Reload_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
station_interface__srv__Reload_Response__Sequence__destroy(station_interface__srv__Reload_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    station_interface__srv__Reload_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
station_interface__srv__Reload_Response__Sequence__are_equal(const station_interface__srv__Reload_Response__Sequence * lhs, const station_interface__srv__Reload_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!station_interface__srv__Reload_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
station_interface__srv__Reload_Response__Sequence__copy(
  const station_interface__srv__Reload_Response__Sequence * input,
  station_interface__srv__Reload_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(station_interface__srv__Reload_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    station_interface__srv__Reload_Response * data =
      (station_interface__srv__Reload_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!station_interface__srv__Reload_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          station_interface__srv__Reload_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!station_interface__srv__Reload_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "station_interface/srv/detail/reload__functions.h"

bool
station_interface__srv__Reload_Event__init(station_interface__srv__Reload_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    station_interface__srv__Reload_Event__fini(msg);
    return false;
  }
  // request
  if (!station_interface__srv__Reload_Request__Sequence__init(&msg->request, 0)) {
    station_interface__srv__Reload_Event__fini(msg);
    return false;
  }
  // response
  if (!station_interface__srv__Reload_Response__Sequence__init(&msg->response, 0)) {
    station_interface__srv__Reload_Event__fini(msg);
    return false;
  }
  return true;
}

void
station_interface__srv__Reload_Event__fini(station_interface__srv__Reload_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  station_interface__srv__Reload_Request__Sequence__fini(&msg->request);
  // response
  station_interface__srv__Reload_Response__Sequence__fini(&msg->response);
}

bool
station_interface__srv__Reload_Event__are_equal(const station_interface__srv__Reload_Event * lhs, const station_interface__srv__Reload_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!station_interface__srv__Reload_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!station_interface__srv__Reload_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
station_interface__srv__Reload_Event__copy(
  const station_interface__srv__Reload_Event * input,
  station_interface__srv__Reload_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!station_interface__srv__Reload_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!station_interface__srv__Reload_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

station_interface__srv__Reload_Event *
station_interface__srv__Reload_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  station_interface__srv__Reload_Event * msg = (station_interface__srv__Reload_Event *)allocator.allocate(sizeof(station_interface__srv__Reload_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(station_interface__srv__Reload_Event));
  bool success = station_interface__srv__Reload_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
station_interface__srv__Reload_Event__destroy(station_interface__srv__Reload_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    station_interface__srv__Reload_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
station_interface__srv__Reload_Event__Sequence__init(station_interface__srv__Reload_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  station_interface__srv__Reload_Event * data = NULL;

  if (size) {
    data = (station_interface__srv__Reload_Event *)allocator.zero_allocate(size, sizeof(station_interface__srv__Reload_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = station_interface__srv__Reload_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        station_interface__srv__Reload_Event__fini(&data[i - 1]);
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
station_interface__srv__Reload_Event__Sequence__fini(station_interface__srv__Reload_Event__Sequence * array)
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
      station_interface__srv__Reload_Event__fini(&array->data[i]);
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

station_interface__srv__Reload_Event__Sequence *
station_interface__srv__Reload_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  station_interface__srv__Reload_Event__Sequence * array = (station_interface__srv__Reload_Event__Sequence *)allocator.allocate(sizeof(station_interface__srv__Reload_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = station_interface__srv__Reload_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
station_interface__srv__Reload_Event__Sequence__destroy(station_interface__srv__Reload_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    station_interface__srv__Reload_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
station_interface__srv__Reload_Event__Sequence__are_equal(const station_interface__srv__Reload_Event__Sequence * lhs, const station_interface__srv__Reload_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!station_interface__srv__Reload_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
station_interface__srv__Reload_Event__Sequence__copy(
  const station_interface__srv__Reload_Event__Sequence * input,
  station_interface__srv__Reload_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(station_interface__srv__Reload_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    station_interface__srv__Reload_Event * data =
      (station_interface__srv__Reload_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!station_interface__srv__Reload_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          station_interface__srv__Reload_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!station_interface__srv__Reload_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
