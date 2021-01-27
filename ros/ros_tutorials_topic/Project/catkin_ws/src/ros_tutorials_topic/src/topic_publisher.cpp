#include "ros/ros.h" // ROS默认头文件
#include "ros_tutorials_topic/MsgTutorial.h" // MsgTutorial消息头文件( 构建后自动生成)
int main(int argc, char **argv)
{ 
    ros::init(argc, argv, "topic_publisher"); // 初始化节点名称
    ros::NodeHandle nh; // 声明一个节点句柄来与ROS系统进行通信
    // 声明发布者，创建一个使用ros_tutorials_topic功能包的MsgTutorial 消息文件的 
    // 发布者ros_tutorial_pub。话题名称是"ros_tutorial_msg"，
    // 消息文件发布者队列(queue)的大小设置为100
    ros::Publisher ros_tutorial_pub =nh.advertise<ros_tutorials_topic::MsgTutorial>("ros_tutorial_msg", 100); 
    // 设定循环周期。"10"是指10Hz，是以0.1秒间隔重复
    ros::Rate loop_rate(10); 
    // 以MsgTutorial消息文件格式声明一个 叫做msg的消息
    ros_tutorials_topic::MsgTutorial msg; 
    int count = 0; // 声明要在消息中使用的变量
    while (ros::ok())
    { 
        msg.stamp = ros::Time::now(); // 把当前时间传给msg的下级消息stamp
        msg.data = count; // 将变量count的值传给下级消息data
        ROS_INFO("send msg = %d", msg.stamp.sec);  // 显示stamp.sec消息
        ROS_INFO("send msg = %d", msg.stamp.nsec); // 显示stamp.nsec消息
        ROS_INFO("send msg = %d", msg.data);  // 显示data消息
        ros_tutorial_pub.publish(msg); // 发布消息
        loop_rate.sleep(); // 按照上面定义的循环周期进行暂歇
        ++count; // 变量count增加1
    } 
    return 0; 
}
