// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/TopicPubSub.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__TOPIC_PUB_SUB__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__TOPIC_PUB_SUB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_interfaces_demo/msg/detail/topic_pub_sub__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_TopicPubSub_c
{
public:
  explicit Init_TopicPubSub_c(::base_interfaces_demo::msg::TopicPubSub & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::TopicPubSub c(::base_interfaces_demo::msg::TopicPubSub::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::TopicPubSub msg_;
};

class Init_TopicPubSub_b
{
public:
  explicit Init_TopicPubSub_b(::base_interfaces_demo::msg::TopicPubSub & msg)
  : msg_(msg)
  {}
  Init_TopicPubSub_c b(::base_interfaces_demo::msg::TopicPubSub::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_TopicPubSub_c(msg_);
  }

private:
  ::base_interfaces_demo::msg::TopicPubSub msg_;
};

class Init_TopicPubSub_a
{
public:
  Init_TopicPubSub_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TopicPubSub_b a(::base_interfaces_demo::msg::TopicPubSub::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TopicPubSub_b(msg_);
  }

private:
  ::base_interfaces_demo::msg::TopicPubSub msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::TopicPubSub>()
{
  return base_interfaces_demo::msg::builder::Init_TopicPubSub_a();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__TOPIC_PUB_SUB__BUILDER_HPP_
