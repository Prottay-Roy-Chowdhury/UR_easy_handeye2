// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_commander:srv/VisualizePoses.idl
// generated code does not contain a copyright notice

#ifndef UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__TRAITS_HPP_
#define UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_commander/srv/detail/visualize_poses__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace ur_commander
{

namespace srv
{

inline void to_flow_style_yaml(
  const VisualizePoses_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
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
  const VisualizePoses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisualizePoses_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ur_commander

namespace rosidl_generator_traits
{

[[deprecated("use ur_commander::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_commander::srv::VisualizePoses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_commander::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_commander::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur_commander::srv::VisualizePoses_Request & msg)
{
  return ur_commander::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur_commander::srv::VisualizePoses_Request>()
{
  return "ur_commander::srv::VisualizePoses_Request";
}

template<>
inline const char * name<ur_commander::srv::VisualizePoses_Request>()
{
  return "ur_commander/srv/VisualizePoses_Request";
}

template<>
struct has_fixed_size<ur_commander::srv::VisualizePoses_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_commander::srv::VisualizePoses_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_commander::srv::VisualizePoses_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_commander
{

namespace srv
{

inline void to_flow_style_yaml(
  const VisualizePoses_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VisualizePoses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisualizePoses_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ur_commander

namespace rosidl_generator_traits
{

[[deprecated("use ur_commander::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_commander::srv::VisualizePoses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_commander::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_commander::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur_commander::srv::VisualizePoses_Response & msg)
{
  return ur_commander::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur_commander::srv::VisualizePoses_Response>()
{
  return "ur_commander::srv::VisualizePoses_Response";
}

template<>
inline const char * name<ur_commander::srv::VisualizePoses_Response>()
{
  return "ur_commander/srv/VisualizePoses_Response";
}

template<>
struct has_fixed_size<ur_commander::srv::VisualizePoses_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_commander::srv::VisualizePoses_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_commander::srv::VisualizePoses_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_commander::srv::VisualizePoses>()
{
  return "ur_commander::srv::VisualizePoses";
}

template<>
inline const char * name<ur_commander::srv::VisualizePoses>()
{
  return "ur_commander/srv/VisualizePoses";
}

template<>
struct has_fixed_size<ur_commander::srv::VisualizePoses>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_commander::srv::VisualizePoses_Request>::value &&
    has_fixed_size<ur_commander::srv::VisualizePoses_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_commander::srv::VisualizePoses>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_commander::srv::VisualizePoses_Request>::value &&
    has_bounded_size<ur_commander::srv::VisualizePoses_Response>::value
  >
{
};

template<>
struct is_service<ur_commander::srv::VisualizePoses>
  : std::true_type
{
};

template<>
struct is_service_request<ur_commander::srv::VisualizePoses_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_commander::srv::VisualizePoses_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__TRAITS_HPP_
