cmake_minimum_required(VERSION 3.8)

project(bubbleSort)

include_directories("include/")

set(SRC_LIST src/main.cpp src/bubbleSort.cpp include/bubbleSort.hpp)
add_executable(${PROJECT_NAME} ${SRC_LIST})
