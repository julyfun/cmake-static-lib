cmake_minimum_required(VERSION 3.10)
project(dyn_lib)
set(CMAKE_CXX_STANDARD 14)

add_library(mymath2 SHARED src/mymath2.cpp)
