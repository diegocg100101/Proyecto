// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kalanchoe_interface:msg/Measure.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kalanchoe_interface/msg/measure.hpp"


#ifndef KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__BUILDER_HPP_
#define KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kalanchoe_interface/msg/detail/measure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kalanchoe_interface
{

namespace msg
{

namespace builder
{

class Init_Measure_value
{
public:
  explicit Init_Measure_value(::kalanchoe_interface::msg::Measure & msg)
  : msg_(msg)
  {}
  ::kalanchoe_interface::msg::Measure value(::kalanchoe_interface::msg::Measure::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kalanchoe_interface::msg::Measure msg_;
};

class Init_Measure_time
{
public:
  Init_Measure_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Measure_value time(::kalanchoe_interface::msg::Measure::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Measure_value(msg_);
  }

private:
  ::kalanchoe_interface::msg::Measure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kalanchoe_interface::msg::Measure>()
{
  return kalanchoe_interface::msg::builder::Init_Measure_time();
}

}  // namespace kalanchoe_interface

#endif  // KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__BUILDER_HPP_
