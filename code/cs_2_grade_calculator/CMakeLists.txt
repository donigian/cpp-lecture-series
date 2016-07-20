cmake_minimum_required(VERSION 3.5)
project(cs_2_grade_calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(cs_2_grade_calculator ${SOURCE_FILES})