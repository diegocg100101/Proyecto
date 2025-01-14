// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from station_interface:srv/Reload.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "station_interface/srv/reload.hpp"


#ifndef STATION_INTERFACE__SRV__DETAIL__RELOAD__TRAITS_HPP_
#define STATION_INTERFACE__SRV__DETAIL__RELOAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "station_interface/srv/detail/reload__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace station_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Reload_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: load
  {
    out << "load: ";
    rosidl_generator_traits::value_to_yaml(msg.load, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Reload_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load: ";
    rosidl_generator_traits::value_to_yaml(msg.load, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Reload_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace station_interface

namespace rosidl_generator_traits
{

[[deprecated("use station_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const station_interface::srv::Reload_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  station_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use station_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const station_interface::srv::Reload_Request & msg)
{
  return station_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<station_interface::srv::Reload_Request>()
{
  return "station_interface::srv::Reload_Request";
}

template<>
inline const char * name<station_interface::srv::Reload_Request>()
{
  return "station_interface/srv/Reload_Request";
}

template<>
struct has_fixed_size<station_interface::srv::Reload_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<station_interface::srv::Reload_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<station_interface::srv::Reload_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace station_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Reload_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: libre
  {
    out << "libre: ";
    rosidl_generator_traits::value_to_yaml(msg.libre, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Reload_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: libre
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "libre: ";
    rosidl_generator_traits::value_to_yaml(msg.libre, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Reload_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace station_interface

namespace rosidl_generator_traits
{

[[deprecated("use station_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const station_interface::srv::Reload_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  station_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use station_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const station_interface::srv::Reload_Response & msg)
{
  return station_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<station_interface::srv::Reload_Response>()
{
  return "station_interface::srv::Reload_Response";
}

template<>
inline const char * name<station_interface::srv::Reload_Response>()
{
  return "station_interface/srv/Reload_Response";
}

template<>
struct has_fixed_size<station_interface::srv::Reload_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<station_interface::srv::Reload_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<station_interface::srv::Reload_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace station_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const Reload_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Reload_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Reload_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace station_interface

namespace rosidl_generator_traits
{

[[deprecated("use station_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const station_interface::srv::Reload_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  station_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use station_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const station_interface::srv::Reload_Event & msg)
{
  return station_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<station_interface::srv::Reload_Event>()
{
  return "station_interface::srv::Reload_Event";
}

template<>
inline const char * name<station_interface::srv::Reload_Event>()
{
  return "station_interface/srv/Reload_Event";
}

template<>
struct has_fixed_size<station_interface::srv::Reload_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<station_interface::srv::Reload_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<station_interface::srv::Reload_Request>::value && has_bounded_size<station_interface::srv::Reload_Response>::value> {};

template<>
struct is_message<station_interface::srv::Reload_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<station_interface::srv::Reload>()
{
  return "station_interface::srv::Reload";
}

template<>
inline const char * name<station_interface::srv::Reload>()
{
  return "station_interface/srv/Reload";
}

template<>
struct has_fixed_size<station_interface::srv::Reload>
  : std::integral_constant<
    bool,
    has_fixed_size<station_interface::srv::Reload_Request>::value &&
    has_fixed_size<station_interface::srv::Reload_Response>::value
  >
{
};

template<>
struct has_bounded_size<station_interface::srv::Reload>
  : std::integral_constant<
    bool,
    has_bounded_size<station_interface::srv::Reload_Request>::value &&
    has_bounded_size<station_interface::srv::Reload_Response>::value
  >
{
};

template<>
struct is_service<station_interface::srv::Reload>
  : std::true_type
{
};

template<>
struct is_service_request<station_interface::srv::Reload_Request>
  : std::true_type
{
};

template<>
struct is_service_response<station_interface::srv::Reload_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STATION_INTERFACE__SRV__DETAIL__RELOAD__TRAITS_HPP_
