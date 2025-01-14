// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from station_interface:srv/Reload.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "station_interface/srv/detail/reload__functions.h"
#include "station_interface/srv/detail/reload__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace station_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Reload_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reload_Request_type_support_ids_t;

static const _Reload_Request_type_support_ids_t _Reload_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, station_interface, srv, Reload_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, station_interface, srv, Reload_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reload_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &station_interface__srv__Reload_Request__get_type_hash,
  &station_interface__srv__Reload_Request__get_type_description,
  &station_interface__srv__Reload_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace station_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<station_interface::srv::Reload_Request>()
{
  return &::station_interface::srv::rosidl_typesupport_cpp::Reload_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, station_interface, srv, Reload_Request)() {
  return get_message_type_support_handle<station_interface::srv::Reload_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "station_interface/srv/detail/reload__functions.h"
// already included above
// #include "station_interface/srv/detail/reload__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace station_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Reload_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reload_Response_type_support_ids_t;

static const _Reload_Response_type_support_ids_t _Reload_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, station_interface, srv, Reload_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, station_interface, srv, Reload_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reload_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &station_interface__srv__Reload_Response__get_type_hash,
  &station_interface__srv__Reload_Response__get_type_description,
  &station_interface__srv__Reload_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace station_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<station_interface::srv::Reload_Response>()
{
  return &::station_interface::srv::rosidl_typesupport_cpp::Reload_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, station_interface, srv, Reload_Response)() {
  return get_message_type_support_handle<station_interface::srv::Reload_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "station_interface/srv/detail/reload__functions.h"
// already included above
// #include "station_interface/srv/detail/reload__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace station_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Reload_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reload_Event_type_support_ids_t;

static const _Reload_Event_type_support_ids_t _Reload_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, station_interface, srv, Reload_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, station_interface, srv, Reload_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reload_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &station_interface__srv__Reload_Event__get_type_hash,
  &station_interface__srv__Reload_Event__get_type_description,
  &station_interface__srv__Reload_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace station_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<station_interface::srv::Reload_Event>()
{
  return &::station_interface::srv::rosidl_typesupport_cpp::Reload_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, station_interface, srv, Reload_Event)() {
  return get_message_type_support_handle<station_interface::srv::Reload_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "station_interface/srv/detail/reload__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace station_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Reload_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reload_type_support_ids_t;

static const _Reload_type_support_ids_t _Reload_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, station_interface, srv, Reload)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, station_interface, srv, Reload)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reload_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<station_interface::srv::Reload_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<station_interface::srv::Reload_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<station_interface::srv::Reload_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<station_interface::srv::Reload>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<station_interface::srv::Reload>,
  &station_interface__srv__Reload__get_type_hash,
  &station_interface__srv__Reload__get_type_description,
  &station_interface__srv__Reload__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace station_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<station_interface::srv::Reload>()
{
  return &::station_interface::srv::rosidl_typesupport_cpp::Reload_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, station_interface, srv, Reload)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<station_interface::srv::Reload>();
}

#ifdef __cplusplus
}
#endif
