FROM liujiboy/ros
# 用setup.sh脚本初始化项目
COPY setup.sh /root
RUN chmod +x /root/setup.sh
RUN /root/setup.sh
# 拷贝python脚本到项目
COPY scripts /home/ubuntu/Project/catkin_ws/src/ros_robot/scripts
# 拷贝消息定义
COPY msg /home/ubuntu/Project/catkin_ws/src/ros_robot/msg
# 拷贝修改后的CMake文件
COPY CMakeLists.txt /home/ubuntu/Project/catkin_ws/src/ros_robot
# 给python脚本赋予执行权限
WORKDIR /home/ubuntu/Project/catkin_ws/src/ros_robot/scripts
RUN chmod +x game.py
RUN chmod +x publish_speed.py
COPY build.sh /root
RUN chmod +x /root/build.sh
RUN /root/build.sh
# 拷贝启动脚本并赋予执行权限
COPY start_game.sh /root
RUN chmod +x /root/start_game.sh

COPY start_publish_speed.sh /root
RUN chmod +x /root/start_publish_speed.sh