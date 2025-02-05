cmake_minimum_required(VERSION 3.8)

project(StalinSort)

include_directories("include/")

set(SRC_LIST main.cpp src/stalinSort.cpp include/stalinSort.hpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})