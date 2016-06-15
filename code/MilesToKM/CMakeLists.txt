cmake_minimum_required(VERSION 3.5)
project(MilesToKM)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp include/conversion.h src/conversion.cpp)
add_executable(MilesToKM ${SOURCE_FILES})