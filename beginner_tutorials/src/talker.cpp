#include "ros/ros.h"
#include "std_msgs/Float32.h"

// simple creation of a node
int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");

  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<std_msgs::Float32>("chatter", 1000);

  ros::Rate loop_rate(40);

  // simple message publishing, setting speed to 10
  while (ros::ok())
  {
    std_msgs::Float32 msg;
    float speed = 10;
    msg.data = speed;

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
  }


  return 0;
}
