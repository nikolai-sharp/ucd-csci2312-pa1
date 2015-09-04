cmake_minimum_required(VERSION 3.3)
project(IntProPA1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES pa1.cpp Point.cpp Point.h)
add_executable(IntProPA1 ${SOURCE_FILES})