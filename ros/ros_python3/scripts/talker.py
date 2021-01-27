#!/usr/bin/env python
# encoding=utf-8
# license removed for brevity
import rospy #rospy封装了ROS的python功能
from std_msgs.msg import String #std_msgs模块封装了一系列的标准消息

def talker():
    pub = rospy.Publisher('chatter', String, queue_size=10) #创建一个发布消息的topic叫做/chatter，发布的消息是String
    rospy.init_node('talker', anonymous=True) #初始化一个发布消息的节点，名字叫做talker
    rate = rospy.Rate(10) # 10hz #发布消息的频率是每秒钟10次
    while not rospy.is_shutdown():
        hello_str = "hello world %s" % rospy.get_time() #你懂的
        rospy.loginfo(hello_str) #打印消息到控制台
        pub.publish(hello_str) #把消息发布到网上
        rate.sleep() #休息一下，每秒10次的频率也就是休息1/10秒

if __name__ == '__main__':
    try:
        talker() #main函数执行talker
    except rospy.ROSInterruptException:
        pass