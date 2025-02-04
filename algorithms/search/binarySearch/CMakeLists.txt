cmake_minimum_required(VERSION 3.8)

project(binarySearch)

include_directories("include/")

set(SRC_LIST main.cpp src/binarySearch.cpp include/binarySearch.hpp)
add_executable(${PROJECT_NAME} ${SRC_LIST})
