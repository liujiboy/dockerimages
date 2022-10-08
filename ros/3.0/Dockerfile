FROM liujiboy/ros:2.0
# 安装ros-kinetic-jsk-recognition-msgs库
RUN apt-get install ros-kinetic-jsk-recognition-msgs  -y
# 安装nlopt
COPY nlopt /root/nlopt
WORKDIR  /root/nlopt/build
RUN cmake ..
RUN make
RUN make install
# 安装Autoware标定工具
COPY calibration_ws /root/calibration_ws
WORKDIR /root/calibration_ws
RUN sh -c "/bin/bash build.bash"
RUN rm build.bash
RUN ldconfig