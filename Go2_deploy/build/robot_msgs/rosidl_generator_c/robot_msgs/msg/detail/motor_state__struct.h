// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define ROBOT_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorState in the package robot_msgs.
typedef struct robot_msgs__msg__MotorState
{
  /// motor current pos (rad)
  float q;
  /// motor current vel (rad/s)
  float dq;
  /// motor current acc (rad/s^2)
  float ddq;
  /// current estimated output torque (N*m)
  float tau_est;
  /// current estimated output cur (N*m)
  float cur;
} robot_msgs__msg__MotorState;

// Struct for a sequence of robot_msgs__msg__MotorState.
typedef struct robot_msgs__msg__MotorState__Sequence
{
  robot_msgs__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msgs__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
