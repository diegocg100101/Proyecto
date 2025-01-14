// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from kalanchoe_interface:msg/Measure.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "kalanchoe_interface/msg/detail/measure__struct.h"
#include "kalanchoe_interface/msg/detail/measure__type_support.h"
#include "kalanchoe_interface/msg/detail/measure__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace kalanchoe_interface
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Measure_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Measure_type_support_ids_t;

static const _Measure_type_support_ids_t _Measure_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Measure_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Measure_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Measure_type_support_symbol_names_t _Measure_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kalanchoe_interface, msg, Measure)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kalanchoe_interface, msg, Measure)),
  }
};

typedef struct _Measure_type_support_data_t
{
  void * data[2];
} _Measure_type_support_data_t;

static _Measure_type_support_data_t _Measure_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Measure_message_typesupport_map = {
  2,
  "kalanchoe_interface",
  &_Measure_message_typesupport_ids.typesupport_identifier[0],
  &_Measure_message_typesupport_symbol_names.symbol_name[0],
  &_Measure_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Measure_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Measure_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &kalanchoe_interface__msg__Measure__get_type_hash,
  &kalanchoe_interface__msg__Measure__get_type_description,
  &kalanchoe_interface__msg__Measure__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace kalanchoe_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kalanchoe_interface, msg, Measure)() {
  return &::kalanchoe_interface::msg::rosidl_typesupport_c::Measure_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
