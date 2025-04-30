// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_commander:srv/VisualizePoses.idl
// generated code does not contain a copyright notice

#ifndef UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__STRUCT_H_
#define UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/VisualizePoses in the package ur_commander.
typedef struct ur_commander__srv__VisualizePoses_Request
{
  rosidl_runtime_c__String frame_id;
  geometry_msgs__msg__Pose__Sequence poses;
} ur_commander__srv__VisualizePoses_Request;

// Struct for a sequence of ur_commander__srv__VisualizePoses_Request.
typedef struct ur_commander__srv__VisualizePoses_Request__Sequence
{
  ur_commander__srv__VisualizePoses_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_commander__srv__VisualizePoses_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/VisualizePoses in the package ur_commander.
typedef struct ur_commander__srv__VisualizePoses_Response
{
  bool success;
} ur_commander__srv__VisualizePoses_Response;

// Struct for a sequence of ur_commander__srv__VisualizePoses_Response.
typedef struct ur_commander__srv__VisualizePoses_Response__Sequence
{
  ur_commander__srv__VisualizePoses_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_commander__srv__VisualizePoses_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_COMMANDER__SRV__DETAIL__VISUALIZE_POSES__STRUCT_H_
