#!/bin/bash
#设置ROS环境变量
source /opt/ros/kinetic/setup.bash
# 进入项目目录
cd /home/ubuntu/Project/catkin_ws
# 激活虚拟环境使用python3
source venv/bin/activate
# 构建
catkin_make