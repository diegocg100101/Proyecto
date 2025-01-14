// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kalanchoe_interface:msg/Measure.idl
// generated code does not contain a copyright notice

#include "kalanchoe_interface/msg/detail/measure__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kalanchoe_interface
const rosidl_type_hash_t *
kalanchoe_interface__msg__Measure__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0x43, 0xe7, 0xc4, 0x9d, 0x15, 0x89, 0xa2,
      0xc5, 0xb5, 0x44, 0x60, 0xab, 0x8b, 0xe8, 0x3e,
      0x83, 0xbc, 0x30, 0xf4, 0xe7, 0x3b, 0x4a, 0xbc,
      0x7d, 0x86, 0x9e, 0xee, 0xa5, 0x03, 0x7d, 0xfb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kalanchoe_interface__msg__Measure__TYPE_NAME[] = "kalanchoe_interface/msg/Measure";

// Define type names, field names, and default values
static char kalanchoe_interface__msg__Measure__FIELD_NAME__time[] = "time";
static char kalanchoe_interface__msg__Measure__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field kalanchoe_interface__msg__Measure__FIELDS[] = {
  {
    {kalanchoe_interface__msg__Measure__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kalanchoe_interface__msg__Measure__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kalanchoe_interface__msg__Measure__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kalanchoe_interface__msg__Measure__TYPE_NAME, 31, 31},
      {kalanchoe_interface__msg__Measure__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 time\n"
  "float64 value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kalanchoe_interface__msg__Measure__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kalanchoe_interface__msg__Measure__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kalanchoe_interface__msg__Measure__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kalanchoe_interface__msg__Measure__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
