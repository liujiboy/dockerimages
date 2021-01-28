FROM ros:foxy
# 进入/root目录
WORKDIR /root
# 创建项目目录
RUN mkdir -p /root/ros_ws
# 进入项目目录
WORKDIR /root/ros_ws
# 创建py_pubsub
RUN /bin/bash -c 'source /opt/ros/$ROS_DISTRO/setup.bash;\
    ros2 pkg create --build-type ament_python py_pubsub'
# 拷贝python文件到目录
COPY  scripts /root/ros_ws/py_pubsub/py_pubsub
# 拷贝package.xml、setup.cfg和setup.py
COPY  config /root/ros_ws/py_pubsub
# 进入项目目录
WORKDIR /root/ros_ws
# 构建
RUN colcon build --packages-select py_pubsub

# 拷贝启动脚本，赋予启动权限
COPY start_talker.sh /root
RUN chmod +x /root/start_talker.sh

COPY start_listener.sh /root
RUN chmod +x /root/start_listener.sh