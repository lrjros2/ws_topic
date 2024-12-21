from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # launch 2 nodes
    t1 = Node(package="turtlesim", executable="turtlesim_node")
    t2 = Node(package="turtlesim", executable="turtlesim_node", namespace="t2")

    # control

    # self defined node with event

    return LaunchDescription([t1, t2]) 