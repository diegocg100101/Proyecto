// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kalanchoe_interface:msg/Measure.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kalanchoe_interface/msg/measure.h"


#ifndef KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__FUNCTIONS_H_
#define KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "kalanchoe_interface/msg/rosidl_generator_c__visibility_control.h"

#include "kalanchoe_interface/msg/detail/measure__struct.h"

/// Initialize msg/Measure message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kalanchoe_interface__msg__Measure
 * )) before or use
 * kalanchoe_interface__msg__Measure__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
bool
kalanchoe_interface__msg__Measure__init(kalanchoe_interface__msg__Measure * msg);

/// Finalize msg/Measure message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
void
kalanchoe_interface__msg__Measure__fini(kalanchoe_interface__msg__Measure * msg);

/// Create msg/Measure message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kalanchoe_interface__msg__Measure__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
kalanchoe_interface__msg__Measure *
kalanchoe_interface__msg__Measure__create(void);

/// Destroy msg/Measure message.
/**
 * It calls
 * kalanchoe_interface__msg__Measure__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
void
kalanchoe_interface__msg__Measure__destroy(kalanchoe_interface__msg__Measure * msg);

/// Check for msg/Measure message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
bool
kalanchoe_interface__msg__Measure__are_equal(const kalanchoe_interface__msg__Measure * lhs, const kalanchoe_interface__msg__Measure * rhs);

/// Copy a msg/Measure message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
bool
kalanchoe_interface__msg__Measure__copy(
  const kalanchoe_interface__msg__Measure * input,
  kalanchoe_interface__msg__Measure * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
const rosidl_type_hash_t *
kalanchoe_interface__msg__Measure__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
const rosidl_runtime_c__type_description__TypeDescription *
kalanchoe_interface__msg__Measure__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
const rosidl_runtime_c__type_description__TypeSource *
kalanchoe_interface__msg__Measure__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
const rosidl_runtime_c__type_description__TypeSource__Sequence *
kalanchoe_interface__msg__Measure__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Measure messages.
/**
 * It allocates the memory for the number of elements and calls
 * kalanchoe_interface__msg__Measure__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
bool
kalanchoe_interface__msg__Measure__Sequence__init(kalanchoe_interface__msg__Measure__Sequence * array, size_t size);

/// Finalize array of msg/Measure messages.
/**
 * It calls
 * kalanchoe_interface__msg__Measure__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
void
kalanchoe_interface__msg__Measure__Sequence__fini(kalanchoe_interface__msg__Measure__Sequence * array);

/// Create array of msg/Measure messages.
/**
 * It allocates the memory for the array and calls
 * kalanchoe_interface__msg__Measure__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
kalanchoe_interface__msg__Measure__Sequence *
kalanchoe_interface__msg__Measure__Sequence__create(size_t size);

/// Destroy array of msg/Measure messages.
/**
 * It calls
 * kalanchoe_interface__msg__Measure__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
void
kalanchoe_interface__msg__Measure__Sequence__destroy(kalanchoe_interface__msg__Measure__Sequence * array);

/// Check for msg/Measure message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
bool
kalanchoe_interface__msg__Measure__Sequence__are_equal(const kalanchoe_interface__msg__Measure__Sequence * lhs, const kalanchoe_interface__msg__Measure__Sequence * rhs);

/// Copy an array of msg/Measure messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
bool
kalanchoe_interface__msg__Measure__Sequence__copy(
  const kalanchoe_interface__msg__Measure__Sequence * input,
  kalanchoe_interface__msg__Measure__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KALANCHOE_INTERFACE__MSG__DETAIL__MEASURE__FUNCTIONS_H_
