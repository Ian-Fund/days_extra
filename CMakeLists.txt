cmake_minimum_required(VERSION 3.8)
project(extra_quadratic)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp quad.h quad.cpp)
add_executable(extra_quadratic ${SOURCE_FILES})