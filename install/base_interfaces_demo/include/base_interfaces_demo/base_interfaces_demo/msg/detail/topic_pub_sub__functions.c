// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/TopicPubSub.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/topic_pub_sub__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `a`
#include "rosidl_runtime_c/string_functions.h"

bool
base_interfaces_demo__msg__TopicPubSub__init(base_interfaces_demo__msg__TopicPubSub * msg)
{
  if (!msg) {
    return false;
  }
  // a
  if (!rosidl_runtime_c__String__init(&msg->a)) {
    base_interfaces_demo__msg__TopicPubSub__fini(msg);
    return false;
  }
  // b
  // c
  return true;
}

void
base_interfaces_demo__msg__TopicPubSub__fini(base_interfaces_demo__msg__TopicPubSub * msg)
{
  if (!msg) {
    return;
  }
  // a
  rosidl_runtime_c__String__fini(&msg->a);
  // b
  // c
}

bool
base_interfaces_demo__msg__TopicPubSub__are_equal(const base_interfaces_demo__msg__TopicPubSub * lhs, const base_interfaces_demo__msg__TopicPubSub * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->a), &(rhs->a)))
  {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__TopicPubSub__copy(
  const base_interfaces_demo__msg__TopicPubSub * input,
  base_interfaces_demo__msg__TopicPubSub * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  if (!rosidl_runtime_c__String__copy(
      &(input->a), &(output->a)))
  {
    return false;
  }
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  return true;
}

base_interfaces_demo__msg__TopicPubSub *
base_interfaces_demo__msg__TopicPubSub__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__TopicPubSub * msg = (base_interfaces_demo__msg__TopicPubSub *)allocator.allocate(sizeof(base_interfaces_demo__msg__TopicPubSub), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__TopicPubSub));
  bool success = base_interfaces_demo__msg__TopicPubSub__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__TopicPubSub__destroy(base_interfaces_demo__msg__TopicPubSub * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__TopicPubSub__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__TopicPubSub__Sequence__init(base_interfaces_demo__msg__TopicPubSub__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__TopicPubSub * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__TopicPubSub *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__TopicPubSub), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__TopicPubSub__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__TopicPubSub__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__msg__TopicPubSub__Sequence__fini(base_interfaces_demo__msg__TopicPubSub__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__msg__TopicPubSub__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__msg__TopicPubSub__Sequence *
base_interfaces_demo__msg__TopicPubSub__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__TopicPubSub__Sequence * array = (base_interfaces_demo__msg__TopicPubSub__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__TopicPubSub__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__TopicPubSub__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__TopicPubSub__Sequence__destroy(base_interfaces_demo__msg__TopicPubSub__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__TopicPubSub__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__TopicPubSub__Sequence__are_equal(const base_interfaces_demo__msg__TopicPubSub__Sequence * lhs, const base_interfaces_demo__msg__TopicPubSub__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__TopicPubSub__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__TopicPubSub__Sequence__copy(
  const base_interfaces_demo__msg__TopicPubSub__Sequence * input,
  base_interfaces_demo__msg__TopicPubSub__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__TopicPubSub);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_interfaces_demo__msg__TopicPubSub * data =
      (base_interfaces_demo__msg__TopicPubSub *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__TopicPubSub__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__TopicPubSub__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces_demo__msg__TopicPubSub__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
