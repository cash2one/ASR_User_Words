#include "ros/ros.h"
#include "speechrecog/Command.h"
#include "std_msgs/String.h"

int main(int argc, char **argv)
{
	ros::init(argc, argv, "trigger");
	ros::NodeHandle n;
              ros::ServiceClient client = n.serviceClient<speechrecog::Command>("command_recognize");

              speechrecog::Command srv;
              srv.request.num=0;//默认将其设置为0，以触发server服务；
              if (srv.request.num== 0)
              {
              	if (client.call(srv))
              	{
              		ROS_INFO("Success to call service user_command!");
              	}
              	else
              	{
              		ROS_ERROR("Failed to call service user_command");
	                             return 1;
              	}
              }
              else
              {
              	ROS_INFO("Failed to trigger the service, Please set the requeset.num = 0 !");
              }
	return 0;
}
