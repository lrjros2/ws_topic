from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, RegisterEventHandler
from launch.event_handlers import OnProcessExit

def generate_launch_description():
    # launch 2 nodes
    t1 = Node(package="turtlesim", executable="turtlesim_node")
    t2 = Node(package="turtlesim", executable="turtlesim_node", namespace="t2")

    # control
    rotate = ExecuteProcess(
        cmd = ["ros2 action send_goal /t2/turtle1/rotate_absolute turtlesim/action/RotateAbsolute \"{'theta':3.14}\""],
        output = "both",
        shell = True
    )

    # self defined node with event
    selfDefinedNode = Node(package = "topic_tutor", executable = "topic_pub_sub")
    # order of exec, event register
    rotate_end = RegisterEventHandler(
        event_handler = OnProcessExit(
            target_action = rotate,
            on_exit = selfDefinedNode
        )
    )

    return LaunchDescription([t1, t2, rotate, rotate_end]) 