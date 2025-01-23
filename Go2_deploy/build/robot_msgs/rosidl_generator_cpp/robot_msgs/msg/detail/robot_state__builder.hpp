// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotState_motor_state
{
public:
  explicit Init_RobotState_motor_state(::robot_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::robot_msgs::msg::RobotState motor_state(::robot_msgs::msg::RobotState::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msgs::msg::RobotState msg_;
};

class Init_RobotState_imu
{
public:
  Init_RobotState_imu()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_motor_state imu(::robot_msgs::msg::RobotState::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_RobotState_motor_state(msg_);
  }

private:
  ::robot_msgs::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msgs::msg::RobotState>()
{
  return robot_msgs::msg::builder::Init_RobotState_imu();
}

}  // namespace robot_msgs

#endif  // ROBOT_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
