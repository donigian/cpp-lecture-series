cmake_minimum_required(VERSION 3.5)
project(Hello_World)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp main_enhanced.cpp main_command_args.cpp)
add_executable(Hello_World ${SOURCE_FILES})