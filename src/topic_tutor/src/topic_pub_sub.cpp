#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"

class TopicPubSub : public rclcpp::Node{
public:
  TopicPubSub() : Node("topic_pub_sub_node"){
      RCLCPP_INFO(this->get_logger(), "Object created!");

      pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/t2/turtle1/cmd_vel", 10);
      sub_ = this->create_subscription<turtlesim::msg::Pose>("turtle1/pose", 
        10, 
        std::bind(&TopicPubSub::pose_cb, this, std::placeholders::_1));
  }

private:
  void pose_cb(const turtlesim::msg::Pose &pose){
    // cmd vel
    geometry_msgs::msg::Twist twist;

    twist.linear.x = pose.linear_velocity;
    twist.angular.z = -pose.angular_velocity;

    // cmd publish
    pub_->publish(twist);
  }

  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_;
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sub_;
};

int main(int argc, char* argv[]){
  rclcpp::init(argc, argv);

  rclcpp::spin(std::make_shared<TopicPubSub>());

  rclcpp::shutdown();

  return 0;
}