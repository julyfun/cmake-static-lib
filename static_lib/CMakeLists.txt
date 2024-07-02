cmake_minimum_required(VERSION 3.10)
project(static_library)
set(CMAKE_CXX_STANDARD 14)

add_library(mymath STATIC src/mymath.cpp)
