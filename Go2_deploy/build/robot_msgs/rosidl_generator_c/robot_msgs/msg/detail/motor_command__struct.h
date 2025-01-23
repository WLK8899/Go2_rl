// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define ROBOT_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorCommand in the package robot_msgs.
typedef struct robot_msgs__msg__MotorCommand
{
  /// motor target position
  float q;
  /// motor target velocity
  float dq;
  /// motor target torque
  float tau;
  /// motor spring stiffness coefficient
  float kp;
  /// motor damper coefficient
  float kd;
} robot_msgs__msg__MotorCommand;

// Struct for a sequence of robot_msgs__msg__MotorCommand.
typedef struct robot_msgs__msg__MotorCommand__Sequence
{
  robot_msgs__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msgs__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
