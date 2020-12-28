cmake_minimum_required(VERSION 3.15)
project(SampleCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(SampleCpp main.cpp device.cpp device.hpp)