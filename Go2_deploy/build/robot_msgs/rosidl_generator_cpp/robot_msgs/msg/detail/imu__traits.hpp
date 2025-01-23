// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_msgs:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_
#define ROBOT_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_msgs/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IMU & msg,
  std::ostream & out)
{
  out << "{";
  // member: quaternion
  {
    if (msg.quaternion.size() == 0) {
      out << "quaternion: []";
    } else {
      out << "quaternion: [";
      size_t pending_items = msg.quaternion.size();
      for (auto item : msg.quaternion) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyroscope
  {
    if (msg.gyroscope.size() == 0) {
      out << "gyroscope: []";
    } else {
      out << "gyroscope: [";
      size_t pending_items = msg.gyroscope.size();
      for (auto item : msg.gyroscope) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accelerometer
  {
    if (msg.accelerometer.size() == 0) {
      out << "accelerometer: []";
    } else {
      out << "accelerometer: [";
      size_t pending_items = msg.accelerometer.size();
      for (auto item : msg.accelerometer) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IMU & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quaternion.size() == 0) {
      out << "quaternion: []\n";
    } else {
      out << "quaternion:\n";
      for (auto item : msg.quaternion) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyroscope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyroscope.size() == 0) {
      out << "gyroscope: []\n";
    } else {
      out << "gyroscope:\n";
      for (auto item : msg.gyroscope) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accelerometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accelerometer.size() == 0) {
      out << "accelerometer: []\n";
    } else {
      out << "accelerometer:\n";
      for (auto item : msg.accelerometer) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IMU & msg, bool use_flow_style = false)
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

}  // namespace robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_msgs::msg::IMU & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_msgs::msg::IMU & msg)
{
  return robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msgs::msg::IMU>()
{
  return "robot_msgs::msg::IMU";
}

template<>
inline const char * name<robot_msgs::msg::IMU>()
{
  return "robot_msgs/msg/IMU";
}

template<>
struct has_fixed_size<robot_msgs::msg::IMU>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_msgs::msg::IMU>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_msgs::msg::IMU>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MSGS__MSG__DETAIL__IMU__TRAITS_HPP_
