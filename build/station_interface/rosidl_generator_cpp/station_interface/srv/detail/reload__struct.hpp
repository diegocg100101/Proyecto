// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from station_interface:srv/Reload.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "station_interface/srv/reload.hpp"


#ifndef STATION_INTERFACE__SRV__DETAIL__RELOAD__STRUCT_HPP_
#define STATION_INTERFACE__SRV__DETAIL__RELOAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__station_interface__srv__Reload_Request __attribute__((deprecated))
#else
# define DEPRECATED__station_interface__srv__Reload_Request __declspec(deprecated)
#endif

namespace station_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Reload_Request_
{
  using Type = Reload_Request_<ContainerAllocator>;

  explicit Reload_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->load = 0.0;
      this->id = 0l;
    }
  }

  explicit Reload_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->load = 0.0;
      this->id = 0l;
    }
  }

  // field types and members
  using _load_type =
    double;
  _load_type load;
  using _id_type =
    int32_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__load(
    const double & _arg)
  {
    this->load = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    station_interface::srv::Reload_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const station_interface::srv::Reload_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<station_interface::srv::Reload_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<station_interface::srv::Reload_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      station_interface::srv::Reload_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<station_interface::srv::Reload_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      station_interface::srv::Reload_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<station_interface::srv::Reload_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<station_interface::srv::Reload_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<station_interface::srv::Reload_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__station_interface__srv__Reload_Request
    std::shared_ptr<station_interface::srv::Reload_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__station_interface__srv__Reload_Request
    std::shared_ptr<station_interface::srv::Reload_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reload_Request_ & other) const
  {
    if (this->load != other.load) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reload_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reload_Request_

// alias to use template instance with default allocator
using Reload_Request =
  station_interface::srv::Reload_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace station_interface


#ifndef _WIN32
# define DEPRECATED__station_interface__srv__Reload_Response __attribute__((deprecated))
#else
# define DEPRECATED__station_interface__srv__Reload_Response __declspec(deprecated)
#endif

namespace station_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Reload_Response_
{
  using Type = Reload_Response_<ContainerAllocator>;

  explicit Reload_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->time = 0.0;
      this->libre = false;
    }
  }

  explicit Reload_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->time = 0.0;
      this->libre = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _time_type =
    double;
  _time_type time;
  using _libre_type =
    bool;
  _libre_type libre;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__libre(
    const bool & _arg)
  {
    this->libre = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    station_interface::srv::Reload_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const station_interface::srv::Reload_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<station_interface::srv::Reload_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<station_interface::srv::Reload_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      station_interface::srv::Reload_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<station_interface::srv::Reload_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      station_interface::srv::Reload_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<station_interface::srv::Reload_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<station_interface::srv::Reload_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<station_interface::srv::Reload_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__station_interface__srv__Reload_Response
    std::shared_ptr<station_interface::srv::Reload_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__station_interface__srv__Reload_Response
    std::shared_ptr<station_interface::srv::Reload_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reload_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->libre != other.libre) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reload_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reload_Response_

// alias to use template instance with default allocator
using Reload_Response =
  station_interface::srv::Reload_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace station_interface


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__station_interface__srv__Reload_Event __attribute__((deprecated))
#else
# define DEPRECATED__station_interface__srv__Reload_Event __declspec(deprecated)
#endif

namespace station_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Reload_Event_
{
  using Type = Reload_Event_<ContainerAllocator>;

  explicit Reload_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Reload_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<station_interface::srv::Reload_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<station_interface::srv::Reload_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<station_interface::srv::Reload_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<station_interface::srv::Reload_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<station_interface::srv::Reload_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<station_interface::srv::Reload_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<station_interface::srv::Reload_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<station_interface::srv::Reload_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    station_interface::srv::Reload_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const station_interface::srv::Reload_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<station_interface::srv::Reload_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<station_interface::srv::Reload_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      station_interface::srv::Reload_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<station_interface::srv::Reload_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      station_interface::srv::Reload_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<station_interface::srv::Reload_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<station_interface::srv::Reload_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<station_interface::srv::Reload_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__station_interface__srv__Reload_Event
    std::shared_ptr<station_interface::srv::Reload_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__station_interface__srv__Reload_Event
    std::shared_ptr<station_interface::srv::Reload_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reload_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reload_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reload_Event_

// alias to use template instance with default allocator
using Reload_Event =
  station_interface::srv::Reload_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace station_interface

namespace station_interface
{

namespace srv
{

struct Reload
{
  using Request = station_interface::srv::Reload_Request;
  using Response = station_interface::srv::Reload_Response;
  using Event = station_interface::srv::Reload_Event;
};

}  // namespace srv

}  // namespace station_interface

#endif  // STATION_INTERFACE__SRV__DETAIL__RELOAD__STRUCT_HPP_
