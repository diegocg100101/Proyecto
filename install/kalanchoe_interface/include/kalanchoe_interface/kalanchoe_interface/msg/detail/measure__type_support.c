// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kalanchoe_interface:msg/Measure.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kalanchoe_interface/msg/detail/measure__rosidl_typesupport_introspection_c.h"
#include "kalanchoe_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kalanchoe_interface/msg/detail/measure__functions.h"
#include "kalanchoe_interface/msg/detail/measure__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kalanchoe_interface__msg__Measure__init(message_memory);
}

void kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_fini_function(void * message_memory)
{
  kalanchoe_interface__msg__Measure__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_message_member_array[2] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kalanchoe_interface__msg__Measure, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kalanchoe_interface__msg__Measure, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_message_members = {
  "kalanchoe_interface__msg",  // message namespace
  "Measure",  // message name
  2,  // number of fields
  sizeof(kalanchoe_interface__msg__Measure),
  false,  // has_any_key_member_
  kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_message_member_array,  // message members
  kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_init_function,  // function to initialize message memory (memory has to be allocated)
  kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_message_type_support_handle = {
  0,
  &kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_message_members,
  get_message_typesupport_handle_function,
  &kalanchoe_interface__msg__Measure__get_type_hash,
  &kalanchoe_interface__msg__Measure__get_type_description,
  &kalanchoe_interface__msg__Measure__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kalanchoe_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kalanchoe_interface, msg, Measure)() {
  if (!kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_message_type_support_handle.typesupport_identifier) {
    kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kalanchoe_interface__msg__Measure__rosidl_typesupport_introspection_c__Measure_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
