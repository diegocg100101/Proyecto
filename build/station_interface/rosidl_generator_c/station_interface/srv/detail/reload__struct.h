// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from station_interface:srv/Reload.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "station_interface/srv/reload.h"


#ifndef STATION_INTERFACE__SRV__DETAIL__RELOAD__STRUCT_H_
#define STATION_INTERFACE__SRV__DETAIL__RELOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Reload in the package station_interface.
typedef struct station_interface__srv__Reload_Request
{
  double load;
  int32_t id;
} station_interface__srv__Reload_Request;

// Struct for a sequence of station_interface__srv__Reload_Request.
typedef struct station_interface__srv__Reload_Request__Sequence
{
  station_interface__srv__Reload_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} station_interface__srv__Reload_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Reload in the package station_interface.
typedef struct station_interface__srv__Reload_Response
{
  bool success;
  double time;
  bool libre;
} station_interface__srv__Reload_Response;

// Struct for a sequence of station_interface__srv__Reload_Response.
typedef struct station_interface__srv__Reload_Response__Sequence
{
  station_interface__srv__Reload_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} station_interface__srv__Reload_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  station_interface__srv__Reload_Event__request__MAX_SIZE = 1
};
// response
enum
{
  station_interface__srv__Reload_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Reload in the package station_interface.
typedef struct station_interface__srv__Reload_Event
{
  service_msgs__msg__ServiceEventInfo info;
  station_interface__srv__Reload_Request__Sequence request;
  station_interface__srv__Reload_Response__Sequence response;
} station_interface__srv__Reload_Event;

// Struct for a sequence of station_interface__srv__Reload_Event.
typedef struct station_interface__srv__Reload_Event__Sequence
{
  station_interface__srv__Reload_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} station_interface__srv__Reload_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATION_INTERFACE__SRV__DETAIL__RELOAD__STRUCT_H_
