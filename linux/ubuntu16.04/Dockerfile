FROM ubuntu:16.04
# 删除原来的源
RUN rm /etc/apt/sources.list
# 用阿里云镜像替代原来的源
RUN touch /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ xenial main restricted universe multiverse">> /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ xenial-security main restricted universe multiverse">>  /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ xenial-updates main restricted universe multiverse">>  /etc/apt/sources.list
RUN echo "deb http://mirrors.aliyun.com/ubuntu/ xenial-backports main restricted universe multiverse">>  /etc/apt/sources.list
RUN apt-get update
