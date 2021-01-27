cmake_minimum_required(VERSION 2.8.3)
project(ros_tutorials_topic)

## catkin构建时需要的组件包。
## 是依赖包，是message_generation、 std_msgs和roscpp。
## 如果这些功能包不存在，在构建过程中会发生错误。
find_package(catkin REQUIRED COMPONENTS message_generation std_msgs roscpp)

## 消息声明:MsgTutorial.msg 
add_message_files(FILES MsgTutorial.msg)

## 这是设置依赖性消息的选项。
## 如果未安装std_msgs，则在构建过程中会发生错误。 
generate_messages(DEPENDENCIES std_msgs)

## catkin功能包选项，描述了库、catkin构建依赖项和系统依赖的功能包。 
catkin_package(
  LIBRARIES ros_tutorials_topic
  CATKIN_DEPENDS std_msgs roscpp
)
## 设置包含目录。 
include_directories(${catkin_INCLUDE_DIRS})

## topic_publisher节点的构建选项。
## 配置可执行文件、目标链接库和其他依赖项。
add_executable(topic_publisher src/topic_publisher.cpp)
add_dependencies(topic_publisher ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS}) 
target_link_libraries(topic_publisher ${catkin_LIBRARIES})

## topic_subscriber节点的构建选项。
add_executable(topic_subscriber src/topic_subscriber.cpp)
add_dependencies(topic_subscriber ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS}) 
target_link_libraries(topic_subscriber ${catkin_LIBRARIES})