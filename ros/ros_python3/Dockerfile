FROM liujiboy/ros
# 用setup.sh脚本初始化项目
COPY setup.sh /root
RUN chmod +x /root/setup.sh
RUN /root/setup.sh
# 拷贝python脚本到项目
COPY scripts /home/ubuntu/Project/catkin_ws/src/ros_python3/scripts
# 给python脚本赋予执行权限
WORKDIR /home/ubuntu/Project/catkin_ws/src/ros_python3/scripts
RUN chmod +x listener.py
RUN chmod +x talker.py
RUN chmod +x talker2.py
# 拷贝启动脚本并赋予执行权限
COPY start_talker.sh /root
RUN chmod +x /root/start_talker.sh

COPY start_talker2.sh /root
RUN chmod +x /root/start_talker2.sh

COPY start_listener.sh /root
RUN chmod +x /root/start_listener.sh