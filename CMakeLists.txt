cmake_minimum_required(VERSION 3.6)
project(os3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp MapReduceClient.h MapReduceFramework.h MapReduceClientUser.cpp MapReduceSearch.cpp)
add_executable(os3 ${SOURCE_FILES})