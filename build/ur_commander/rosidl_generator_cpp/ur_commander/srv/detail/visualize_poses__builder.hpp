// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_commander:srv/VisualizePoses.idl
// generated code does not contain a copyright notice

#ifndef UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__BUILDER_HPP_
#define UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_commander/srv/detail/visualize_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_commander
{

namespace srv
{

namespace builder
{

class Init_VisualizePoses_Request_poses
{
public:
  explicit Init_VisualizePoses_Request_poses(::ur_commander::srv::VisualizePoses_Request & msg)
  : msg_(msg)
  {}
  ::ur_commander::srv::VisualizePoses_Request poses(::ur_commander::srv::VisualizePoses_Request::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_commander::srv::VisualizePoses_Request msg_;
};

class Init_VisualizePoses_Request_frame_id
{
public:
  Init_VisualizePoses_Request_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisualizePoses_Request_poses frame_id(::ur_commander::srv::VisualizePoses_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_VisualizePoses_Request_poses(msg_);
  }

private:
  ::ur_commander::srv::VisualizePoses_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_commander::srv::VisualizePoses_Request>()
{
  return ur_commander::srv::builder::Init_VisualizePoses_Request_frame_id();
}

}  // namespace ur_commander


namespace ur_commander
{

namespace srv
{

namespace builder
{

class Init_VisualizePoses_Response_success
{
public:
  Init_VisualizePoses_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_commander::srv::VisualizePoses_Response success(::ur_commander::srv::VisualizePoses_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_commander::srv::VisualizePoses_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_commander::srv::VisualizePoses_Response>()
{
  return ur_commander::srv::builder::Init_VisualizePoses_Response_success();
}

}  // namespace ur_commander

#endif  // UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__BUILDER_HPP_
