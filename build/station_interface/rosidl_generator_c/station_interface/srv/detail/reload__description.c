// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from station_interface:srv/Reload.idl
// generated code does not contain a copyright notice

#include "station_interface/srv/detail/reload__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_station_interface
const rosidl_type_hash_t *
station_interface__srv__Reload__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0x05, 0x1a, 0x04, 0x52, 0xa5, 0x23, 0x7d,
      0x6e, 0xac, 0xb7, 0x59, 0x78, 0xbf, 0x67, 0xa6,
      0x5b, 0x61, 0xda, 0xe3, 0x50, 0xa3, 0x6d, 0x57,
      0x9c, 0x5e, 0x7e, 0x6a, 0x6c, 0xc3, 0xd3, 0x41,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_station_interface
const rosidl_type_hash_t *
station_interface__srv__Reload_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0xb0, 0xbe, 0x2e, 0xe0, 0xe6, 0xc3, 0x08,
      0x53, 0xc9, 0xe0, 0x47, 0xa5, 0x54, 0xbb, 0x09,
      0x38, 0x0a, 0xdd, 0x3a, 0xb8, 0xc9, 0xb5, 0xf2,
      0x72, 0xf3, 0x84, 0x52, 0x93, 0x40, 0x4c, 0xff,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_station_interface
const rosidl_type_hash_t *
station_interface__srv__Reload_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0xc6, 0x4b, 0x06, 0x24, 0xef, 0x23, 0x74,
      0xf6, 0x0c, 0x11, 0x54, 0x5c, 0x1d, 0xc7, 0xe3,
      0xda, 0xea, 0xfb, 0x6f, 0x62, 0x90, 0xfe, 0xb1,
      0x08, 0x31, 0x73, 0x9a, 0x63, 0x54, 0x7d, 0xb9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_station_interface
const rosidl_type_hash_t *
station_interface__srv__Reload_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x7e, 0x3c, 0x63, 0x8e, 0x2a, 0xe8, 0x8c,
      0x0c, 0x1b, 0xb4, 0x2c, 0x2b, 0x57, 0xa5, 0xcc,
      0x38, 0xb6, 0x62, 0xa4, 0xd0, 0x03, 0xd2, 0xe6,
      0x42, 0x06, 0x7c, 0xad, 0xd6, 0xc6, 0xe6, 0xb7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char station_interface__srv__Reload__TYPE_NAME[] = "station_interface/srv/Reload";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char station_interface__srv__Reload_Event__TYPE_NAME[] = "station_interface/srv/Reload_Event";
static char station_interface__srv__Reload_Request__TYPE_NAME[] = "station_interface/srv/Reload_Request";
static char station_interface__srv__Reload_Response__TYPE_NAME[] = "station_interface/srv/Reload_Response";

// Define type names, field names, and default values
static char station_interface__srv__Reload__FIELD_NAME__request_message[] = "request_message";
static char station_interface__srv__Reload__FIELD_NAME__response_message[] = "response_message";
static char station_interface__srv__Reload__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field station_interface__srv__Reload__FIELDS[] = {
  {
    {station_interface__srv__Reload__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {station_interface__srv__Reload_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {station_interface__srv__Reload_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {station_interface__srv__Reload_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription station_interface__srv__Reload__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
station_interface__srv__Reload__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {station_interface__srv__Reload__TYPE_NAME, 28, 28},
      {station_interface__srv__Reload__FIELDS, 3, 3},
    },
    {station_interface__srv__Reload__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = station_interface__srv__Reload_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = station_interface__srv__Reload_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = station_interface__srv__Reload_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char station_interface__srv__Reload_Request__FIELD_NAME__load[] = "load";
static char station_interface__srv__Reload_Request__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field station_interface__srv__Reload_Request__FIELDS[] = {
  {
    {station_interface__srv__Reload_Request__FIELD_NAME__load, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload_Request__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
station_interface__srv__Reload_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {station_interface__srv__Reload_Request__TYPE_NAME, 36, 36},
      {station_interface__srv__Reload_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char station_interface__srv__Reload_Response__FIELD_NAME__success[] = "success";
static char station_interface__srv__Reload_Response__FIELD_NAME__time[] = "time";
static char station_interface__srv__Reload_Response__FIELD_NAME__libre[] = "libre";

static rosidl_runtime_c__type_description__Field station_interface__srv__Reload_Response__FIELDS[] = {
  {
    {station_interface__srv__Reload_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload_Response__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload_Response__FIELD_NAME__libre, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
station_interface__srv__Reload_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {station_interface__srv__Reload_Response__TYPE_NAME, 37, 37},
      {station_interface__srv__Reload_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char station_interface__srv__Reload_Event__FIELD_NAME__info[] = "info";
static char station_interface__srv__Reload_Event__FIELD_NAME__request[] = "request";
static char station_interface__srv__Reload_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field station_interface__srv__Reload_Event__FIELDS[] = {
  {
    {station_interface__srv__Reload_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {station_interface__srv__Reload_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {station_interface__srv__Reload_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription station_interface__srv__Reload_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {station_interface__srv__Reload_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
station_interface__srv__Reload_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {station_interface__srv__Reload_Event__TYPE_NAME, 34, 34},
      {station_interface__srv__Reload_Event__FIELDS, 3, 3},
    },
    {station_interface__srv__Reload_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = station_interface__srv__Reload_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = station_interface__srv__Reload_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 load\n"
  "int32 id\n"
  "---\n"
  "bool success\n"
  "float64 time\n"
  "bool libre\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
station_interface__srv__Reload__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {station_interface__srv__Reload__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 64, 64},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
station_interface__srv__Reload_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {station_interface__srv__Reload_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
station_interface__srv__Reload_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {station_interface__srv__Reload_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
station_interface__srv__Reload_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {station_interface__srv__Reload_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
station_interface__srv__Reload__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *station_interface__srv__Reload__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *station_interface__srv__Reload_Event__get_individual_type_description_source(NULL);
    sources[4] = *station_interface__srv__Reload_Request__get_individual_type_description_source(NULL);
    sources[5] = *station_interface__srv__Reload_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
station_interface__srv__Reload_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *station_interface__srv__Reload_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
station_interface__srv__Reload_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *station_interface__srv__Reload_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
station_interface__srv__Reload_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *station_interface__srv__Reload_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *station_interface__srv__Reload_Request__get_individual_type_description_source(NULL);
    sources[4] = *station_interface__srv__Reload_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
