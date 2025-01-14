// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from station_interface:srv/Reload.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "station_interface/srv/detail/reload__rosidl_typesupport_introspection_c.h"
#include "station_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "station_interface/srv/detail/reload__functions.h"
#include "station_interface/srv/detail/reload__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  station_interface__srv__Reload_Request__init(message_memory);
}

void station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_fini_function(void * message_memory)
{
  station_interface__srv__Reload_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_message_member_array[2] = {
  {
    "load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(station_interface__srv__Reload_Request, load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(station_interface__srv__Reload_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_message_members = {
  "station_interface__srv",  // message namespace
  "Reload_Request",  // message name
  2,  // number of fields
  sizeof(station_interface__srv__Reload_Request),
  false,  // has_any_key_member_
  station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_message_member_array,  // message members
  station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_message_type_support_handle = {
  0,
  &station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_message_members,
  get_message_typesupport_handle_function,
  &station_interface__srv__Reload_Request__get_type_hash,
  &station_interface__srv__Reload_Request__get_type_description,
  &station_interface__srv__Reload_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_station_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Request)() {
  if (!station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_message_type_support_handle.typesupport_identifier) {
    station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "station_interface/srv/detail/reload__rosidl_typesupport_introspection_c.h"
// already included above
// #include "station_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "station_interface/srv/detail/reload__functions.h"
// already included above
// #include "station_interface/srv/detail/reload__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  station_interface__srv__Reload_Response__init(message_memory);
}

void station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_fini_function(void * message_memory)
{
  station_interface__srv__Reload_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(station_interface__srv__Reload_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(station_interface__srv__Reload_Response, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "libre",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(station_interface__srv__Reload_Response, libre),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_message_members = {
  "station_interface__srv",  // message namespace
  "Reload_Response",  // message name
  3,  // number of fields
  sizeof(station_interface__srv__Reload_Response),
  false,  // has_any_key_member_
  station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_message_member_array,  // message members
  station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_message_type_support_handle = {
  0,
  &station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_message_members,
  get_message_typesupport_handle_function,
  &station_interface__srv__Reload_Response__get_type_hash,
  &station_interface__srv__Reload_Response__get_type_description,
  &station_interface__srv__Reload_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_station_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Response)() {
  if (!station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_message_type_support_handle.typesupport_identifier) {
    station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "station_interface/srv/detail/reload__rosidl_typesupport_introspection_c.h"
// already included above
// #include "station_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "station_interface/srv/detail/reload__functions.h"
// already included above
// #include "station_interface/srv/detail/reload__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "station_interface/srv/reload.h"
// Member `request`
// Member `response`
// already included above
// #include "station_interface/srv/detail/reload__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  station_interface__srv__Reload_Event__init(message_memory);
}

void station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_fini_function(void * message_memory)
{
  station_interface__srv__Reload_Event__fini(message_memory);
}

size_t station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__size_function__Reload_Event__request(
  const void * untyped_member)
{
  const station_interface__srv__Reload_Request__Sequence * member =
    (const station_interface__srv__Reload_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_const_function__Reload_Event__request(
  const void * untyped_member, size_t index)
{
  const station_interface__srv__Reload_Request__Sequence * member =
    (const station_interface__srv__Reload_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_function__Reload_Event__request(
  void * untyped_member, size_t index)
{
  station_interface__srv__Reload_Request__Sequence * member =
    (station_interface__srv__Reload_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__fetch_function__Reload_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const station_interface__srv__Reload_Request * item =
    ((const station_interface__srv__Reload_Request *)
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_const_function__Reload_Event__request(untyped_member, index));
  station_interface__srv__Reload_Request * value =
    (station_interface__srv__Reload_Request *)(untyped_value);
  *value = *item;
}

void station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__assign_function__Reload_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  station_interface__srv__Reload_Request * item =
    ((station_interface__srv__Reload_Request *)
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_function__Reload_Event__request(untyped_member, index));
  const station_interface__srv__Reload_Request * value =
    (const station_interface__srv__Reload_Request *)(untyped_value);
  *item = *value;
}

bool station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__resize_function__Reload_Event__request(
  void * untyped_member, size_t size)
{
  station_interface__srv__Reload_Request__Sequence * member =
    (station_interface__srv__Reload_Request__Sequence *)(untyped_member);
  station_interface__srv__Reload_Request__Sequence__fini(member);
  return station_interface__srv__Reload_Request__Sequence__init(member, size);
}

size_t station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__size_function__Reload_Event__response(
  const void * untyped_member)
{
  const station_interface__srv__Reload_Response__Sequence * member =
    (const station_interface__srv__Reload_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_const_function__Reload_Event__response(
  const void * untyped_member, size_t index)
{
  const station_interface__srv__Reload_Response__Sequence * member =
    (const station_interface__srv__Reload_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_function__Reload_Event__response(
  void * untyped_member, size_t index)
{
  station_interface__srv__Reload_Response__Sequence * member =
    (station_interface__srv__Reload_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__fetch_function__Reload_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const station_interface__srv__Reload_Response * item =
    ((const station_interface__srv__Reload_Response *)
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_const_function__Reload_Event__response(untyped_member, index));
  station_interface__srv__Reload_Response * value =
    (station_interface__srv__Reload_Response *)(untyped_value);
  *value = *item;
}

void station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__assign_function__Reload_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  station_interface__srv__Reload_Response * item =
    ((station_interface__srv__Reload_Response *)
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_function__Reload_Event__response(untyped_member, index));
  const station_interface__srv__Reload_Response * value =
    (const station_interface__srv__Reload_Response *)(untyped_value);
  *item = *value;
}

bool station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__resize_function__Reload_Event__response(
  void * untyped_member, size_t size)
{
  station_interface__srv__Reload_Response__Sequence * member =
    (station_interface__srv__Reload_Response__Sequence *)(untyped_member);
  station_interface__srv__Reload_Response__Sequence__fini(member);
  return station_interface__srv__Reload_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(station_interface__srv__Reload_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(station_interface__srv__Reload_Event, request),  // bytes offset in struct
    NULL,  // default value
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__size_function__Reload_Event__request,  // size() function pointer
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_const_function__Reload_Event__request,  // get_const(index) function pointer
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_function__Reload_Event__request,  // get(index) function pointer
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__fetch_function__Reload_Event__request,  // fetch(index, &value) function pointer
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__assign_function__Reload_Event__request,  // assign(index, value) function pointer
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__resize_function__Reload_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(station_interface__srv__Reload_Event, response),  // bytes offset in struct
    NULL,  // default value
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__size_function__Reload_Event__response,  // size() function pointer
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_const_function__Reload_Event__response,  // get_const(index) function pointer
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__get_function__Reload_Event__response,  // get(index) function pointer
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__fetch_function__Reload_Event__response,  // fetch(index, &value) function pointer
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__assign_function__Reload_Event__response,  // assign(index, value) function pointer
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__resize_function__Reload_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_members = {
  "station_interface__srv",  // message namespace
  "Reload_Event",  // message name
  3,  // number of fields
  sizeof(station_interface__srv__Reload_Event),
  false,  // has_any_key_member_
  station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_member_array,  // message members
  station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_type_support_handle = {
  0,
  &station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_members,
  get_message_typesupport_handle_function,
  &station_interface__srv__Reload_Event__get_type_hash,
  &station_interface__srv__Reload_Event__get_type_description,
  &station_interface__srv__Reload_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_station_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Event)() {
  station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Request)();
  station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Response)();
  if (!station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_type_support_handle.typesupport_identifier) {
    station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "station_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "station_interface/srv/detail/reload__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers station_interface__srv__detail__reload__rosidl_typesupport_introspection_c__Reload_service_members = {
  "station_interface__srv",  // service namespace
  "Reload",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // station_interface__srv__detail__reload__rosidl_typesupport_introspection_c__Reload_Request_message_type_support_handle,
  NULL,  // response message
  // station_interface__srv__detail__reload__rosidl_typesupport_introspection_c__Reload_Response_message_type_support_handle
  NULL  // event_message
  // station_interface__srv__detail__reload__rosidl_typesupport_introspection_c__Reload_Response_message_type_support_handle
};


static rosidl_service_type_support_t station_interface__srv__detail__reload__rosidl_typesupport_introspection_c__Reload_service_type_support_handle = {
  0,
  &station_interface__srv__detail__reload__rosidl_typesupport_introspection_c__Reload_service_members,
  get_service_typesupport_handle_function,
  &station_interface__srv__Reload_Request__rosidl_typesupport_introspection_c__Reload_Request_message_type_support_handle,
  &station_interface__srv__Reload_Response__rosidl_typesupport_introspection_c__Reload_Response_message_type_support_handle,
  &station_interface__srv__Reload_Event__rosidl_typesupport_introspection_c__Reload_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    station_interface,
    srv,
    Reload
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    station_interface,
    srv,
    Reload
  ),
  &station_interface__srv__Reload__get_type_hash,
  &station_interface__srv__Reload__get_type_description,
  &station_interface__srv__Reload__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_station_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload)(void) {
  if (!station_interface__srv__detail__reload__rosidl_typesupport_introspection_c__Reload_service_type_support_handle.typesupport_identifier) {
    station_interface__srv__detail__reload__rosidl_typesupport_introspection_c__Reload_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)station_interface__srv__detail__reload__rosidl_typesupport_introspection_c__Reload_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Event)()->data;
  }

  return &station_interface__srv__detail__reload__rosidl_typesupport_introspection_c__Reload_service_type_support_handle;
}
