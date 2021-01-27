FROM liujiboy/ros
# 项目目录
ARG PROJECT_DIR=/home/ubuntu/Project/catkin_ws
# 源代码目录
ARG SOURCE_DIR=${PROJECT_DIR}/src
# 创建源代码目录
RUN mkdir -p ${SOURCE_DIR}
# 进入源代码目录
WORKDIR ${SOURCE_DIR}
# 初始化
RUN /bin/bash -c 'source /opt/ros/kinetic/setup.bash; \
    catkin_init_workspace'
# 进入项目目录
WORKDIR ${PROJECT_DIR}
# 构建
RUN /bin/bash -c 'source /opt/ros/kinetic/setup.bash; \ 
    catkin_make'
# 激活虚拟环境使用python3
RUN virtualenv -p /usr/bin/python3 venv
# 在虚拟环境下安装ros python包
RUN /bin/bash -c 'source venv/bin/activate; \
    pip3 install -i https://mirrors.aliyun.com/pypi/simple/ catkin_pkg pyyaml empy rospkg'
# 进入源代码目录
WORKDIR ${SOURCE_DIR}
# 创建功能包ros_python3 依赖message_generation std_msgs roscpp
RUN /bin/bash -c 'source /opt/ros/kinetic/setup.bash; \
    catkin_create_pkg ros_python3 message_generation std_msgs roscpp'
# 在源代码目录下创建一个scripts目录放置python文件
RUN mkdir -p ${SOURCE_DIR}/ros_python3/scripts
# 拷贝python脚本到项目
COPY scripts ${SOURCE_DIR}/ros_python3/scripts
# 给python脚本赋予执行权限
WORKDIR ${SOURCE_DIR}/ros_python3/scripts
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