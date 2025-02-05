cmake_minimum_required(VERSION 3.8)

project(linearSearch)

include_directories("include/")

set(SRC_LIST main.cpp src/linearSearch.cpp include/linearSearch.hpp)
add_executable(${PROJECT_NAME} ${SRC_LIST})
