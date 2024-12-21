// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_interfaces_demo:msg/TopicPubSub.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__TOPIC_PUB_SUB__TRAITS_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__TOPIC_PUB_SUB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_interfaces_demo/msg/detail/topic_pub_sub__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace base_interfaces_demo
{

namespace msg
{

inline void to_flow_style_yaml(
  const TopicPubSub & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TopicPubSub & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TopicPubSub & msg, bool use_flow_style = false)
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

}  // namespace base_interfaces_demo

namespace rosidl_generator_traits
{

[[deprecated("use base_interfaces_demo::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_interfaces_demo::msg::TopicPubSub & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_interfaces_demo::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_interfaces_demo::msg::to_yaml() instead")]]
inline std::string to_yaml(const base_interfaces_demo::msg::TopicPubSub & msg)
{
  return base_interfaces_demo::msg::to_yaml(msg);
}

template<>
inline const char * data_type<base_interfaces_demo::msg::TopicPubSub>()
{
  return "base_interfaces_demo::msg::TopicPubSub";
}

template<>
inline const char * name<base_interfaces_demo::msg::TopicPubSub>()
{
  return "base_interfaces_demo/msg/TopicPubSub";
}

template<>
struct has_fixed_size<base_interfaces_demo::msg::TopicPubSub>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_interfaces_demo::msg::TopicPubSub>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<base_interfaces_demo::msg::TopicPubSub>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__TOPIC_PUB_SUB__TRAITS_HPP_
