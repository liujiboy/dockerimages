FROM liujiboy/ros

# 设置密钥
COPY startup.sh /startup.sh
RUN chmod +x /startup.sh
COPY supervisord.conf /etc/supervisor/conf.d/supervisord.conf
# 删除原来的源
RUN rm /etc/apt/sources.list
# 用阿里云镜像替代原来的源
RUN touch /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ xenial main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ xenial-security main restricted universe multiverse">>  /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ xenial-updates main restricted universe multiverse">>  /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ xenial-backports main restricted universe multiverse">>  /etc/apt/sources.list
RUN apt-get update

# 安装gcc、cmake、opencv、pcl、eigen
# opencv在镜像中已经安装
RUN apt-get install gcc -y
RUN apt-get install cmake -y
RUN apt-get install libpcl1.7 -y
RUN apt-get install pcl-tools -y
RUN ln -s  /usr/lib/x86_64-linux-gnu/libproj.so.9 /usr/lib/x86_64-linux-gnu/libproj.so
RUN apt-get install libeigen3-dev -y