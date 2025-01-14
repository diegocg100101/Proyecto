// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kalanchoe_interface:msg/Measure.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kalanchoe_interface/msg/detail/measure__functions.h"
#include "kalanchoe_interface/msg/detail/measure__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kalanchoe_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Measure_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kalanchoe_interface::msg::Measure(_init);
}

void Measure_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kalanchoe_interface::msg::Measure *>(message_memory);
  typed_message->~Measure();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Measure_message_member_array[2] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kalanchoe_interface::msg::Measure, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kalanchoe_interface::msg::Measure, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Measure_message_members = {
  "kalanchoe_interface::msg",  // message namespace
  "Measure",  // message name
  2,  // number of fields
  sizeof(kalanchoe_interface::msg::Measure),
  false,  // has_any_key_member_
  Measure_message_member_array,  // message members
  Measure_init_function,  // function to initialize message memory (memory has to be allocated)
  Measure_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Measure_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Measure_message_members,
  get_message_typesupport_handle_function,
  &kalanchoe_interface__msg__Measure__get_type_hash,
  &kalanchoe_interface__msg__Measure__get_type_description,
  &kalanchoe_interface__msg__Measure__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kalanchoe_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kalanchoe_interface::msg::Measure>()
{
  return &::kalanchoe_interface::msg::rosidl_typesupport_introspection_cpp::Measure_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kalanchoe_interface, msg, Measure)() {
  return &::kalanchoe_interface::msg::rosidl_typesupport_introspection_cpp::Measure_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
