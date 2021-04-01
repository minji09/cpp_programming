#include <ros/ros.h>
#include <iostream>
#include <capstone_LMJ/pointXY.h>
#include <cmath>
#include <visualization_msgs/Marker.h>

int main(int argc, char **argv) //node main function
{

ros::init(argc, argv, "publisher_node"); //initiation
ros::NodeHandle nh; 
ros::Publisher publisher = nh.advertise<capstone_LMJ::pointXY>("/points", 10);
ros::Rate loop_rate(10);



visualization_msgs::Marker line_list;

while (ros::ok()){
    capstone_LMJ::pointXY input;

   //draw L
   input.x = {-4, -4, -4, -3,    -2, -2, -2, -1, -1, 0, 0, 0,      1.5, 2.5, 2, 2, 2, 1.5, 1.5, 1.5 };
   input.y = { 2,  0, 0,   0,      0, 2, 2, 1, 1, 2, 2, 0,           2,   2, 2, 0, 0, 0, 0, 0.5 };
   

   publisher.publish(input);
   ros::spinOnce();
   loop_rate.sleep();
}
return 0;
}

