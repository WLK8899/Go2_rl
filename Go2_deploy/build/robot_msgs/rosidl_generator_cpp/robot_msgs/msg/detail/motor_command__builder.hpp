// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define ROBOT_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msgs/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_kd
{
public:
  explicit Init_MotorCommand_kd(::robot_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::robot_msgs::msg::MotorCommand kd(::robot_msgs::msg::MotorCommand::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_kp
{
public:
  explicit Init_MotorCommand_kp(::robot_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_kd kp(::robot_msgs::msg::MotorCommand::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorCommand_kd(msg_);
  }

private:
  ::robot_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_tau
{
public:
  explicit Init_MotorCommand_tau(::robot_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_kp tau(::robot_msgs::msg::MotorCommand::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return Init_MotorCommand_kp(msg_);
  }

private:
  ::robot_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_dq
{
public:
  explicit Init_MotorCommand_dq(::robot_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_tau dq(::robot_msgs::msg::MotorCommand::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorCommand_tau(msg_);
  }

private:
  ::robot_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_q
{
public:
  Init_MotorCommand_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_dq q(::robot_msgs::msg::MotorCommand::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorCommand_dq(msg_);
  }

private:
  ::robot_msgs::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msgs::msg::MotorCommand>()
{
  return robot_msgs::msg::builder::Init_MotorCommand_q();
}

}  // namespace robot_msgs

#endif  // ROBOT_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
