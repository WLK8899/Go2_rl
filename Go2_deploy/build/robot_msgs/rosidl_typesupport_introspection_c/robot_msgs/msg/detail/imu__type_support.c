// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_msgs:msg/IMU.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_msgs/msg/detail/imu__rosidl_typesupport_introspection_c.h"
#include "robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_msgs/msg/detail/imu__functions.h"
#include "robot_msgs/msg/detail/imu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_msgs__msg__IMU__init(message_memory);
}

void robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_fini_function(void * message_memory)
{
  robot_msgs__msg__IMU__fini(message_memory);
}

size_t robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__quaternion(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__quaternion(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__quaternion(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__quaternion(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__quaternion(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__quaternion(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__quaternion(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__gyroscope(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__gyroscope(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__gyroscope(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__gyroscope(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__gyroscope(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__gyroscope(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__gyroscope(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__accelerometer(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__accelerometer(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__accelerometer(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__accelerometer(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__accelerometer(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__accelerometer(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__accelerometer(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_member_array[3] = {
  {
    "quaternion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robot_msgs__msg__IMU, quaternion),  // bytes offset in struct
    NULL,  // default value
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__quaternion,  // size() function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__quaternion,  // get_const(index) function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__quaternion,  // get(index) function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__quaternion,  // fetch(index, &value) function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__quaternion,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyroscope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(robot_msgs__msg__IMU, gyroscope),  // bytes offset in struct
    NULL,  // default value
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__gyroscope,  // size() function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__gyroscope,  // get_const(index) function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__gyroscope,  // get(index) function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__gyroscope,  // fetch(index, &value) function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__gyroscope,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accelerometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(robot_msgs__msg__IMU, accelerometer),  // bytes offset in struct
    NULL,  // default value
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__size_function__IMU__accelerometer,  // size() function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_const_function__IMU__accelerometer,  // get_const(index) function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__get_function__IMU__accelerometer,  // get(index) function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__fetch_function__IMU__accelerometer,  // fetch(index, &value) function pointer
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__assign_function__IMU__accelerometer,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_members = {
  "robot_msgs__msg",  // message namespace
  "IMU",  // message name
  3,  // number of fields
  sizeof(robot_msgs__msg__IMU),
  robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_member_array,  // message members
  robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_type_support_handle = {
  0,
  &robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_msgs, msg, IMU)() {
  if (!robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_type_support_handle.typesupport_identifier) {
    robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_msgs__msg__IMU__rosidl_typesupport_introspection_c__IMU_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
