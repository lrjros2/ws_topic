// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/TopicPubSub.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__TOPIC_PUB_SUB__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__TOPIC_PUB_SUB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'a'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TopicPubSub in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__TopicPubSub
{
  rosidl_runtime_c__String a;
  int32_t b;
  double c;
} base_interfaces_demo__msg__TopicPubSub;

// Struct for a sequence of base_interfaces_demo__msg__TopicPubSub.
typedef struct base_interfaces_demo__msg__TopicPubSub__Sequence
{
  base_interfaces_demo__msg__TopicPubSub * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__TopicPubSub__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__TOPIC_PUB_SUB__STRUCT_H_
