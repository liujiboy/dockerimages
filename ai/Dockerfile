#以centos镜像为基础
FROM centos
#拷贝.jupter目录到/root/.jupyter目录
RUN mkdir -p /root/.jupyter
COPY .jupyter /root/.jupyter
#安装epel（好像这一步不是必须的）
RUN yum -y install epel-release
#安装python3.8
RUN yum -y install python38
#用pip3安装numpy scipy matplotlib sympy pandas jupyter
RUN pip3 install  numpy scipy matplotlib sympy pandas jupyter
#安装TensorFlow
RUN pip3 install  tensorflow
#安装Pytorch
RUN pip3 install  torch 
RUN pip3 install  torchvision