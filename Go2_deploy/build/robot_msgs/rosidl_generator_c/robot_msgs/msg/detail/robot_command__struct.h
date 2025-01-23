// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_msgs:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSGS__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_
#define ROBOT_MSGS__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_command'
#include "robot_msgs/msg/detail/motor_command__struct.h"

/// Struct defined in msg/RobotCommand in the package robot_msgs.
typedef struct robot_msgs__msg__RobotCommand
{
  robot_msgs__msg__MotorCommand__Sequence motor_command;
} robot_msgs__msg__RobotCommand;

// Struct for a sequence of robot_msgs__msg__RobotCommand.
typedef struct robot_msgs__msg__RobotCommand__Sequence
{
  robot_msgs__msg__RobotCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msgs__msg__RobotCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSGS__MSG__DETAIL__ROBOT_COMMAND__STRUCT_H_
