#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "yogurt");
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");
  ROS_INFO("Hello yerin!");
}
