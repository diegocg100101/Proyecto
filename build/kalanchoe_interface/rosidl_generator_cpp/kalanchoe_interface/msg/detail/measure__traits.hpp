// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kalanchoe_interface:msg/Measure.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kalanchoe_interface/msg/measure.hpp"


#ifndef KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__TRAITS_HPP_
#define KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kalanchoe_interface/msg/detail/measure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kalanchoe_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Measure & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Measure & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Measure & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace kalanchoe_interface

namespace rosidl_generator_traits
{

[[deprecated("use kalanchoe_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kalanchoe_interface::msg::Measure & msg,
  std::ostream & out, size_t indentation = 0)
{
  kalanchoe_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kalanchoe_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const kalanchoe_interface::msg::Measure & msg)
{
  return kalanchoe_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kalanchoe_interface::msg::Measure>()
{
  return "kalanchoe_interface::msg::Measure";
}

template<>
inline const char * name<kalanchoe_interface::msg::Measure>()
{
  return "kalanchoe_interface/msg/Measure";
}

template<>
struct has_fixed_size<kalanchoe_interface::msg::Measure>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kalanchoe_interface::msg::Measure>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kalanchoe_interface::msg::Measure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__TRAITS_HPP_
