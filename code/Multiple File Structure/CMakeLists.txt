cmake_minimum_required(VERSION 3.5)
project(Multiple_File_Structure)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/geometric_utils.cpp include/geometric_utils.h test/geometric_utils_test.cpp)
add_executable(Multiple_File_Structure ${SOURCE_FILES})