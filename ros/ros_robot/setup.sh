#!/bin/bash
#设置ROS环境变量
source /opt/ros/kinetic/setup.bash
# 创建源代码目录
mkdir -p /home/ubuntu/Project/catkin_ws/src
# 进入源代码目录
cd /home/ubuntu/Project/catkin_ws/src
# 初始化
catkin_init_workspace
# 进入项目目录
cd /home/ubuntu/Project/catkin_ws
# 构建
catkin_make
# 设置python虚拟环境
virtualenv -p /usr/bin/python3 venv
# 激活虚拟环境使用python3
source venv/bin/activate
# 在虚拟环境下安装ros python包
pip3 install -i https://mirrors.aliyun.com/pypi/simple/ catkin_pkg pyyaml empy rospkg pygame
# 进入源代码目录
cd /home/ubuntu/Project/catkin_ws/src
# 创建功能包ros_robot 依赖message_generation std_msgs roscpp
catkin_create_pkg ros_robot message_generation std_msgs roscpp
# 在源代码目录下创建一个scripts目录放置python文件
mkdir -p /home/ubuntu/Project/catkin_ws/src/ros_robot/scripts