
#PROJECT关键字用于指定工程的名字和支持的语言，默认支持所有语言
#PROJECT（HELLO C++）

#PROJECT(HELLO)
#SET (SRCLIST main.cpp)

#两个cmake变量，外部构建时使用，BINARY（二进制）是构建到的目录
#SOURCE是源码所在目录
#MESSAGE(STATUS "THIS IS BINARY_DIR" ${HELLO_BINARY_DIR})
#MESSAGE(STATUS "THIS IS SOURCE_DIR" ${HELLO_SOURCE_DIR})

#生成可执行文件hello为可执行文件名
#ADD_EXECUTABLE(hello ${SRCLIST})


find_package(OpenCV REQUIRED)#在系统中寻找opencv的路径，为下文添加opencv头文件和库文件做准备

include_directories(${OpenCV_INCLUDE_DIRS})#添加opencv头文件
ADD_EXECUTABLE(hello main.cpp)#项目1
ADD_EXECUTABLE(duqushipin opencv_1)#项目2
target_link_libraries(duqushipin ${OpenCV_LIBS})#链接opencv库文件到项目上
