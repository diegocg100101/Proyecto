// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kalanchoe_interface:msg/Measure.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kalanchoe_interface/msg/measure.hpp"


#ifndef KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__STRUCT_HPP_
#define KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kalanchoe_interface__msg__Measure __attribute__((deprecated))
#else
# define DEPRECATED__kalanchoe_interface__msg__Measure __declspec(deprecated)
#endif

namespace kalanchoe_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Measure_
{
  using Type = Measure_<ContainerAllocator>;

  explicit Measure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->value = 0.0;
    }
  }

  explicit Measure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->value = 0.0;
    }
  }

  // field types and members
  using _time_type =
    double;
  _time_type time;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kalanchoe_interface::msg::Measure_<ContainerAllocator> *;
  using ConstRawPtr =
    const kalanchoe_interface::msg::Measure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kalanchoe_interface::msg::Measure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kalanchoe_interface::msg::Measure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kalanchoe_interface::msg::Measure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kalanchoe_interface::msg::Measure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kalanchoe_interface::msg::Measure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kalanchoe_interface::msg::Measure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kalanchoe_interface::msg::Measure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kalanchoe_interface::msg::Measure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kalanchoe_interface__msg__Measure
    std::shared_ptr<kalanchoe_interface::msg::Measure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kalanchoe_interface__msg__Measure
    std::shared_ptr<kalanchoe_interface::msg::Measure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Measure_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Measure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Measure_

// alias to use template instance with default allocator
using Measure =
  kalanchoe_interface::msg::Measure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kalanchoe_interface

#endif  // KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__STRUCT_HPP_
