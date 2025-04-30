from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # Launch arguments
    calibration_type = LaunchConfiguration("calibration_type", default="eye_in_hand")
    name = LaunchConfiguration("name", default="my_eih_calib")
    robot_base_frame = LaunchConfiguration("robot_base_frame", default="/base_link")
    robot_effector_frame = LaunchConfiguration("robot_effector_frame", default="/ee_link")
    tracking_base_frame = LaunchConfiguration("tracking_base_frame", default="/optical_origin")
    tracking_marker_frame = LaunchConfiguration("tracking_marker_frame", default="/optical_target")

    # Include the core calibration launch
    calibrate_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('easy_handeye2'),
                'launch',
                'calibrate.launch.py'
            ])
        ]),
        launch_arguments={
            'calibration_type': calibration_type,
            'name': name,
            'robot_base_frame': robot_base_frame,
            'robot_effector_frame': robot_effector_frame,
            'tracking_base_frame': tracking_base_frame,
            'tracking_marker_frame': tracking_marker_frame,
        }.items()
    )

    return LaunchDescription([
        DeclareLaunchArgument('calibration_type', default_value='eye_in_hand'),
        DeclareLaunchArgument('name', default_value='my_eih_calib'),
        DeclareLaunchArgument('robot_base_frame', default_value='/base_link'),
        DeclareLaunchArgument('robot_effector_frame', default_value='/ee_link'),
        DeclareLaunchArgument('tracking_base_frame', default_value='/optical_origin'),
        DeclareLaunchArgument('tracking_marker_frame', default_value='/optical_target'),

        calibrate_launch
    ])