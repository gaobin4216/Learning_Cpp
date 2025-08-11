cmake_minimum_required(VERSION 3.10)
project(OpenCVExample)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 查找OpenCV库
find_package(OpenCV REQUIRED)

# 添加可执行文件
add_executable(OpenCVExample src/main.cpp)

# 将OpenCV的头文件和库链接到我们的可执行文件
target_include_directories(OpenCVExample PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(OpenCVExample PRIVATE ${OpenCV_LIBS})