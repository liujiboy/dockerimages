#!/usr/bin/env python3
import rospy #rospy封装了ROS的python功能
from ros_robot.msg import Speed #msg/Speed.msg定义的消息格式

def talker():
    pub = rospy.Publisher('publish_speed', Speed, queue_size=10) #创建一个发布消息的topic叫做/publish_speed，发布的消息是Speed
    rospy.init_node('speed_talker', anonymous=True) #初始化一个发布消息的节点，名字叫做speed_talker
    rate = rospy.Rate(10) # 10hz #发布消息的频率是每秒钟10次
    s=Speed(vx=10,vy=10)
    while not rospy.is_shutdown():
        
        rospy.loginfo("vx=%d,vy=%d"%(s.vx,s.vy)) #打印消息到控制台
        pub.publish(s) #把消息发布到网上
        rate.sleep() #休息一下，每秒10次的频率也就是休息1/10秒
        

if __name__ == '__main__':
    try:
        talker() #main函数执行talker
    except rospy.ROSInterruptException:
        pass
