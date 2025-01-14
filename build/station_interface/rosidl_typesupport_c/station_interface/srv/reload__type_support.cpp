// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from station_interface:srv/Reload.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "station_interface/srv/detail/reload__struct.h"
#include "station_interface/srv/detail/reload__type_support.h"
#include "station_interface/srv/detail/reload__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace station_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Reload_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reload_Request_type_support_ids_t;

static const _Reload_Request_type_support_ids_t _Reload_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reload_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reload_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reload_Request_type_support_symbol_names_t _Reload_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, station_interface, srv, Reload_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Request)),
  }
};

typedef struct _Reload_Request_type_support_data_t
{
  void * data[2];
} _Reload_Request_type_support_data_t;

static _Reload_Request_type_support_data_t _Reload_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reload_Request_message_typesupport_map = {
  2,
  "station_interface",
  &_Reload_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Reload_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Reload_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reload_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reload_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &station_interface__srv__Reload_Request__get_type_hash,
  &station_interface__srv__Reload_Request__get_type_description,
  &station_interface__srv__Reload_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace station_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, station_interface, srv, Reload_Request)() {
  return &::station_interface::srv::rosidl_typesupport_c::Reload_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "station_interface/srv/detail/reload__struct.h"
// already included above
// #include "station_interface/srv/detail/reload__type_support.h"
// already included above
// #include "station_interface/srv/detail/reload__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace station_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Reload_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reload_Response_type_support_ids_t;

static const _Reload_Response_type_support_ids_t _Reload_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reload_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reload_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reload_Response_type_support_symbol_names_t _Reload_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, station_interface, srv, Reload_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Response)),
  }
};

typedef struct _Reload_Response_type_support_data_t
{
  void * data[2];
} _Reload_Response_type_support_data_t;

static _Reload_Response_type_support_data_t _Reload_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reload_Response_message_typesupport_map = {
  2,
  "station_interface",
  &_Reload_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Reload_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Reload_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reload_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reload_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &station_interface__srv__Reload_Response__get_type_hash,
  &station_interface__srv__Reload_Response__get_type_description,
  &station_interface__srv__Reload_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace station_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, station_interface, srv, Reload_Response)() {
  return &::station_interface::srv::rosidl_typesupport_c::Reload_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "station_interface/srv/detail/reload__struct.h"
// already included above
// #include "station_interface/srv/detail/reload__type_support.h"
// already included above
// #include "station_interface/srv/detail/reload__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace station_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Reload_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reload_Event_type_support_ids_t;

static const _Reload_Event_type_support_ids_t _Reload_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reload_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reload_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reload_Event_type_support_symbol_names_t _Reload_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, station_interface, srv, Reload_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload_Event)),
  }
};

typedef struct _Reload_Event_type_support_data_t
{
  void * data[2];
} _Reload_Event_type_support_data_t;

static _Reload_Event_type_support_data_t _Reload_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reload_Event_message_typesupport_map = {
  2,
  "station_interface",
  &_Reload_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Reload_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Reload_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reload_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reload_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &station_interface__srv__Reload_Event__get_type_hash,
  &station_interface__srv__Reload_Event__get_type_description,
  &station_interface__srv__Reload_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace station_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, station_interface, srv, Reload_Event)() {
  return &::station_interface::srv::rosidl_typesupport_c::Reload_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "station_interface/srv/detail/reload__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace station_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Reload_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reload_type_support_ids_t;

static const _Reload_type_support_ids_t _Reload_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reload_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reload_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reload_type_support_symbol_names_t _Reload_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, station_interface, srv, Reload)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, station_interface, srv, Reload)),
  }
};

typedef struct _Reload_type_support_data_t
{
  void * data[2];
} _Reload_type_support_data_t;

static _Reload_type_support_data_t _Reload_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reload_service_typesupport_map = {
  2,
  "station_interface",
  &_Reload_service_typesupport_ids.typesupport_identifier[0],
  &_Reload_service_typesupport_symbol_names.symbol_name[0],
  &_Reload_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Reload_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reload_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Reload_Request_message_type_support_handle,
  &Reload_Response_message_type_support_handle,
  &Reload_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace station_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, station_interface, srv, Reload)() {
  return &::station_interface::srv::rosidl_typesupport_c::Reload_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
