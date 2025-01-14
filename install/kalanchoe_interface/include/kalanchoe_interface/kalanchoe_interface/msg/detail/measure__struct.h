// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kalanchoe_interface:msg/Measure.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kalanchoe_interface/msg/measure.h"


#ifndef KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__STRUCT_H_
#define KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Measure in the package kalanchoe_interface.
typedef struct kalanchoe_interface__msg__Measure
{
  double time;
  double value;
} kalanchoe_interface__msg__Measure;

// Struct for a sequence of kalanchoe_interface__msg__Measure.
typedef struct kalanchoe_interface__msg__Measure__Sequence
{
  kalanchoe_interface__msg__Measure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kalanchoe_interface__msg__Measure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__STRUCT_H_
