// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msgs:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSGS__MSG__DETAIL__IMU__STRUCT_HPP_
#define ROBOT_MSGS__MSG__DETAIL__IMU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_msgs__msg__IMU __attribute__((deprecated))
#else
# define DEPRECATED__robot_msgs__msg__IMU __declspec(deprecated)
#endif

namespace robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMU_
{
  using Type = IMU_<ContainerAllocator>;

  explicit IMU_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->quaternion.begin(), this->quaternion.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyroscope.begin(), this->gyroscope.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accelerometer.begin(), this->accelerometer.end(), 0.0f);
    }
  }

  explicit IMU_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : quaternion(_alloc),
    gyroscope(_alloc),
    accelerometer(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->quaternion.begin(), this->quaternion.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyroscope.begin(), this->gyroscope.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accelerometer.begin(), this->accelerometer.end(), 0.0f);
    }
  }

  // field types and members
  using _quaternion_type =
    std::array<float, 4>;
  _quaternion_type quaternion;
  using _gyroscope_type =
    std::array<float, 3>;
  _gyroscope_type gyroscope;
  using _accelerometer_type =
    std::array<float, 3>;
  _accelerometer_type accelerometer;

  // setters for named parameter idiom
  Type & set__quaternion(
    const std::array<float, 4> & _arg)
  {
    this->quaternion = _arg;
    return *this;
  }
  Type & set__gyroscope(
    const std::array<float, 3> & _arg)
  {
    this->gyroscope = _arg;
    return *this;
  }
  Type & set__accelerometer(
    const std::array<float, 3> & _arg)
  {
    this->accelerometer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msgs::msg::IMU_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msgs::msg::IMU_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msgs::msg::IMU_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msgs::msg::IMU_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msgs::msg::IMU_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msgs::msg::IMU_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msgs::msg::IMU_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msgs::msg::IMU_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msgs::msg::IMU_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msgs::msg::IMU_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msgs__msg__IMU
    std::shared_ptr<robot_msgs::msg::IMU_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msgs__msg__IMU
    std::shared_ptr<robot_msgs::msg::IMU_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMU_ & other) const
  {
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->gyroscope != other.gyroscope) {
      return false;
    }
    if (this->accelerometer != other.accelerometer) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMU_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMU_

// alias to use template instance with default allocator
using IMU =
  robot_msgs::msg::IMU_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_msgs

#endif  // ROBOT_MSGS__MSG__DETAIL__IMU__STRUCT_HPP_
