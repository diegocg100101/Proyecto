// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from station_interface:srv/Reload.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "station_interface/srv/reload.hpp"


#ifndef STATION_INTERFACE__SRV__DETAIL__RELOAD__BUILDER_HPP_
#define STATION_INTERFACE__SRV__DETAIL__RELOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "station_interface/srv/detail/reload__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace station_interface
{

namespace srv
{

namespace builder
{

class Init_Reload_Request_id
{
public:
  explicit Init_Reload_Request_id(::station_interface::srv::Reload_Request & msg)
  : msg_(msg)
  {}
  ::station_interface::srv::Reload_Request id(::station_interface::srv::Reload_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::station_interface::srv::Reload_Request msg_;
};

class Init_Reload_Request_load
{
public:
  Init_Reload_Request_load()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reload_Request_id load(::station_interface::srv::Reload_Request::_load_type arg)
  {
    msg_.load = std::move(arg);
    return Init_Reload_Request_id(msg_);
  }

private:
  ::station_interface::srv::Reload_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::station_interface::srv::Reload_Request>()
{
  return station_interface::srv::builder::Init_Reload_Request_load();
}

}  // namespace station_interface


namespace station_interface
{

namespace srv
{

namespace builder
{

class Init_Reload_Response_libre
{
public:
  explicit Init_Reload_Response_libre(::station_interface::srv::Reload_Response & msg)
  : msg_(msg)
  {}
  ::station_interface::srv::Reload_Response libre(::station_interface::srv::Reload_Response::_libre_type arg)
  {
    msg_.libre = std::move(arg);
    return std::move(msg_);
  }

private:
  ::station_interface::srv::Reload_Response msg_;
};

class Init_Reload_Response_time
{
public:
  explicit Init_Reload_Response_time(::station_interface::srv::Reload_Response & msg)
  : msg_(msg)
  {}
  Init_Reload_Response_libre time(::station_interface::srv::Reload_Response::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Reload_Response_libre(msg_);
  }

private:
  ::station_interface::srv::Reload_Response msg_;
};

class Init_Reload_Response_success
{
public:
  Init_Reload_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reload_Response_time success(::station_interface::srv::Reload_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Reload_Response_time(msg_);
  }

private:
  ::station_interface::srv::Reload_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::station_interface::srv::Reload_Response>()
{
  return station_interface::srv::builder::Init_Reload_Response_success();
}

}  // namespace station_interface


namespace station_interface
{

namespace srv
{

namespace builder
{

class Init_Reload_Event_response
{
public:
  explicit Init_Reload_Event_response(::station_interface::srv::Reload_Event & msg)
  : msg_(msg)
  {}
  ::station_interface::srv::Reload_Event response(::station_interface::srv::Reload_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::station_interface::srv::Reload_Event msg_;
};

class Init_Reload_Event_request
{
public:
  explicit Init_Reload_Event_request(::station_interface::srv::Reload_Event & msg)
  : msg_(msg)
  {}
  Init_Reload_Event_response request(::station_interface::srv::Reload_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Reload_Event_response(msg_);
  }

private:
  ::station_interface::srv::Reload_Event msg_;
};

class Init_Reload_Event_info
{
public:
  Init_Reload_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reload_Event_request info(::station_interface::srv::Reload_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Reload_Event_request(msg_);
  }

private:
  ::station_interface::srv::Reload_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::station_interface::srv::Reload_Event>()
{
  return station_interface::srv::builder::Init_Reload_Event_info();
}

}  // namespace station_interface

#endif  // STATION_INTERFACE__SRV__DETAIL__RELOAD__BUILDER_HPP_
