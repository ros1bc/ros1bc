#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <iostream>

void number_callback(const std_msgs::Int32::ConstPtr& msg) 
{
ROS_INFO("Received [%d]",msg->data);
}

int main(int argc ,char ** argv)
{
    ros::init(argc,argv, "lec1_topic_subscriber");
    ros::NodeHandle node_obj;
    ros::Subscriber name_subscriber = node_obj.subscribe("/numbers",10,number_callback);
    ros::spin();
    return 0;
}
