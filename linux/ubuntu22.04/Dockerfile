FROM ubuntu:22.04 
# 删除原来的源
RUN rm /etc/apt/sources.list
# 用阿里云镜像替代原来的源
RUN touch /etc/apt/sources.list

RUN echo "deb http://mirrors.aliyun.com/ubuntu/ jammy main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb-src http://mirrors.aliyun.com/ubuntu/ jammy main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ jammy-security main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb-src http://mirrors.aliyun.com/ubuntu/ jammy-security main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ jammy-updates main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb-src http://mirrors.aliyun.com/ubuntu/ jammy-updates main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ jammy-proposed main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb-src http://mirrors.aliyun.com/ubuntu/ jammy-proposed main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ jammy-backports main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb-src http://mirrors.aliyun.com/ubuntu/ jammy-backports main restricted universe multiverse">> /etc/apt/sources.list

RUN apt-get -y update
RUN apt-get install -y gcc
RUN apt-get install -y g++
RUN apt-get install -y cmake
RUN apt-get install -y git
RUN apt-get install -y libgtest-dev