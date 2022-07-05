cmake_minimum_required(VERSION 3.22.0)

project(Great)
add_executable(Greater main.cpp)
add_library(GreaterLib STATIC greater.cpp greater.h)
target_link_libraries(Greater GreaterLib)