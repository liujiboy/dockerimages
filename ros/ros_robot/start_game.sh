#!/bin/bash
# 设置ros环境
source /home/ubuntu/Project/catkin_ws/devel/setup.bash
# 设置python3环境
source /home/ubuntu/Project/catkin_ws/venv/bin/activate
# 启动程序
rosrun ros_robot game.py