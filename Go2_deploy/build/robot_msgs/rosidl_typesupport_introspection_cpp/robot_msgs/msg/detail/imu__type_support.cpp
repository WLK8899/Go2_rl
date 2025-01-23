// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_msgs:msg/IMU.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_msgs/msg/detail/imu__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void IMU_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_msgs::msg::IMU(_init);
}

void IMU_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_msgs::msg::IMU *>(message_memory);
  typed_message->~IMU();
}

size_t size_function__IMU__quaternion(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__IMU__quaternion(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__IMU__quaternion(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__IMU__quaternion(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IMU__quaternion(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IMU__quaternion(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IMU__quaternion(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__IMU__gyroscope(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__IMU__gyroscope(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__IMU__gyroscope(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__IMU__gyroscope(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IMU__gyroscope(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IMU__gyroscope(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IMU__gyroscope(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__IMU__accelerometer(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__IMU__accelerometer(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__IMU__accelerometer(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__IMU__accelerometer(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IMU__accelerometer(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IMU__accelerometer(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IMU__accelerometer(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IMU_message_member_array[3] = {
  {
    "quaternion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robot_msgs::msg::IMU, quaternion),  // bytes offset in struct
    nullptr,  // default value
    size_function__IMU__quaternion,  // size() function pointer
    get_const_function__IMU__quaternion,  // get_const(index) function pointer
    get_function__IMU__quaternion,  // get(index) function pointer
    fetch_function__IMU__quaternion,  // fetch(index, &value) function pointer
    assign_function__IMU__quaternion,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyroscope",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(robot_msgs::msg::IMU, gyroscope),  // bytes offset in struct
    nullptr,  // default value
    size_function__IMU__gyroscope,  // size() function pointer
    get_const_function__IMU__gyroscope,  // get_const(index) function pointer
    get_function__IMU__gyroscope,  // get(index) function pointer
    fetch_function__IMU__gyroscope,  // fetch(index, &value) function pointer
    assign_function__IMU__gyroscope,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accelerometer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(robot_msgs::msg::IMU, accelerometer),  // bytes offset in struct
    nullptr,  // default value
    size_function__IMU__accelerometer,  // size() function pointer
    get_const_function__IMU__accelerometer,  // get_const(index) function pointer
    get_function__IMU__accelerometer,  // get(index) function pointer
    fetch_function__IMU__accelerometer,  // fetch(index, &value) function pointer
    assign_function__IMU__accelerometer,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IMU_message_members = {
  "robot_msgs::msg",  // message namespace
  "IMU",  // message name
  3,  // number of fields
  sizeof(robot_msgs::msg::IMU),
  IMU_message_member_array,  // message members
  IMU_init_function,  // function to initialize message memory (memory has to be allocated)
  IMU_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IMU_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IMU_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_msgs::msg::IMU>()
{
  return &::robot_msgs::msg::rosidl_typesupport_introspection_cpp::IMU_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_msgs, msg, IMU)() {
  return &::robot_msgs::msg::rosidl_typesupport_introspection_cpp::IMU_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
