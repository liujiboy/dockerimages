#include "ros/ros.h" // ROS的默认头文件
#include "ros_tutorials_topic/MsgTutorial.h" // MsgTutorial消息头文件(构建后自动生成)
// 这是一个消息后台函数，
// 此函数在收到一个下面设置的名为ros_tutorial_msg的话题时候被调用。 
// 输入的消息是从ros_tutorials_topic功能包接收MsgTutorial消息。
void msgCallback(const ros_tutorials_topic::MsgTutorial::ConstPtr& msg) {
    ROS_INFO("recieve msg = %d", msg->stamp.sec);// 显示stamp.sec消息
    ROS_INFO("recieve msg = %d", msg->stamp.nsec); // 显示stamp.nsec消息
    ROS_INFO("recieve msg = %d", msg->data);  // 显示data消息
} 
int main(int argc, char **argv)
{ 
    ros::init(argc, argv, "topic_subscriber"); // 初始化节点名称
    ros::NodeHandle nh; // 声明用于ROS系统和通信的节点句柄
    // 声明订阅者，创建一个订阅者ros_tutorial_sub，
    // 它利用ros_tutorials_topic功能包的的MsgTutorial消息文件。
    // 话题名称是"ros_tutorial_msg"，订阅者队列(queue)的大小设为100。
    ros::Subscriber ros_tutorial_sub = nh.subscribe("ros_tutorial_msg", 100, msgCallback);
    // 用于调用后台函数，等待接收消息。在接收到消息时执行后台函数。
    ros::spin();
    return 0; 
}