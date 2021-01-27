#!/usr/bin/env python3
import rospy #rospy封装了ROS的python功能
from ros_robot.msg import Speed #msg/Speed.msg定义的消息格式
import pygame
import sys

def callback(data):
    s=data
    rospy.loginfo(rospy.get_caller_id() + "收到 vx=%f, vy=%f",s.vx,s.vy)
    global vx,vy
    vx=s.vx
    vy=s.vy
pygame.init()  # 初始化pygame
size = width, height = 1024, 768  # 设置窗口大小
screen = pygame.display.set_mode(size)  # 显示窗口
tick = pygame.time.Clock()
x=250
y=150
vy=0
vx=0

rospy.init_node('game', anonymous=True) #初始化节点名称叫做game
rospy.Subscriber("publish_speed", Speed, callback) #订阅主题chatter发出的信息

while True:  # 死循环确保窗口一直显示
    for event in pygame.event.get():  # 遍历所有事件
        if event.type == pygame.QUIT:  # 如果单击关闭窗口，则退出
            sys.exit()
    tick.tick(4)
    x=x+vx
    y=y+vy
    my_rect=pygame.Rect(x,y,300,200)
    screen.fill([0,0,0])
    pygame.draw.rect(screen,[255,0,0],my_rect,0)
    pygame.display.flip()

pygame.quit()  # 退出pygame

