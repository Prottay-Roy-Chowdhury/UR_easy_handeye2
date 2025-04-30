// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_commander:srv/VisualizePoses.idl
// generated code does not contain a copyright notice

#ifndef UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__STRUCT_HPP_
#define UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ur_commander__srv__VisualizePoses_Request __attribute__((deprecated))
#else
# define DEPRECATED__ur_commander__srv__VisualizePoses_Request __declspec(deprecated)
#endif

namespace ur_commander
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VisualizePoses_Request_
{
  using Type = VisualizePoses_Request_<ContainerAllocator>;

  explicit VisualizePoses_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
    }
  }

  explicit VisualizePoses_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
    }
  }

  // field types and members
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_commander::srv::VisualizePoses_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_commander::srv::VisualizePoses_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_commander::srv::VisualizePoses_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_commander::srv::VisualizePoses_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_commander::srv::VisualizePoses_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_commander::srv::VisualizePoses_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_commander::srv::VisualizePoses_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_commander::srv::VisualizePoses_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_commander::srv::VisualizePoses_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_commander::srv::VisualizePoses_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_commander__srv__VisualizePoses_Request
    std::shared_ptr<ur_commander::srv::VisualizePoses_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_commander__srv__VisualizePoses_Request
    std::shared_ptr<ur_commander::srv::VisualizePoses_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisualizePoses_Request_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisualizePoses_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisualizePoses_Request_

// alias to use template instance with default allocator
using VisualizePoses_Request =
  ur_commander::srv::VisualizePoses_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur_commander


#ifndef _WIN32
# define DEPRECATED__ur_commander__srv__VisualizePoses_Response __attribute__((deprecated))
#else
# define DEPRECATED__ur_commander__srv__VisualizePoses_Response __declspec(deprecated)
#endif

namespace ur_commander
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VisualizePoses_Response_
{
  using Type = VisualizePoses_Response_<ContainerAllocator>;

  explicit VisualizePoses_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit VisualizePoses_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_commander::srv::VisualizePoses_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_commander::srv::VisualizePoses_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_commander::srv::VisualizePoses_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_commander::srv::VisualizePoses_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_commander::srv::VisualizePoses_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_commander::srv::VisualizePoses_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_commander::srv::VisualizePoses_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_commander::srv::VisualizePoses_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_commander::srv::VisualizePoses_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_commander::srv::VisualizePoses_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_commander__srv__VisualizePoses_Response
    std::shared_ptr<ur_commander::srv::VisualizePoses_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_commander__srv__VisualizePoses_Response
    std::shared_ptr<ur_commander::srv::VisualizePoses_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisualizePoses_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisualizePoses_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisualizePoses_Response_

// alias to use template instance with default allocator
using VisualizePoses_Response =
  ur_commander::srv::VisualizePoses_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur_commander

namespace ur_commander
{

namespace srv
{

struct VisualizePoses
{
  using Request = ur_commander::srv::VisualizePoses_Request;
  using Response = ur_commander::srv::VisualizePoses_Response;
};

}  // namespace srv

}  // namespace ur_commander

#endif  // UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__STRUCT_HPP_
