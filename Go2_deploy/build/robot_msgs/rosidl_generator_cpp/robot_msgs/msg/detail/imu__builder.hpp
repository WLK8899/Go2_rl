// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msgs:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
#define ROBOT_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msgs/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msgs
{

namespace msg
{

namespace builder
{

class Init_IMU_accelerometer
{
public:
  explicit Init_IMU_accelerometer(::robot_msgs::msg::IMU & msg)
  : msg_(msg)
  {}
  ::robot_msgs::msg::IMU accelerometer(::robot_msgs::msg::IMU::_accelerometer_type arg)
  {
    msg_.accelerometer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msgs::msg::IMU msg_;
};

class Init_IMU_gyroscope
{
public:
  explicit Init_IMU_gyroscope(::robot_msgs::msg::IMU & msg)
  : msg_(msg)
  {}
  Init_IMU_accelerometer gyroscope(::robot_msgs::msg::IMU::_gyroscope_type arg)
  {
    msg_.gyroscope = std::move(arg);
    return Init_IMU_accelerometer(msg_);
  }

private:
  ::robot_msgs::msg::IMU msg_;
};

class Init_IMU_quaternion
{
public:
  Init_IMU_quaternion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMU_gyroscope quaternion(::robot_msgs::msg::IMU::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_IMU_gyroscope(msg_);
  }

private:
  ::robot_msgs::msg::IMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msgs::msg::IMU>()
{
  return robot_msgs::msg::builder::Init_IMU_quaternion();
}

}  // namespace robot_msgs

#endif  // ROBOT_MSGS__MSG__DETAIL__IMU__BUILDER_HPP_
