cmake_minimum_required(VERSION 3.10)
project(executable)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../static_lib/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../dyn_lib/src)

add_executable(main src/main.cpp)
target_link_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../static_lib/build)
target_link_libraries(main mymath)

target_link_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../dyn_lib/build)
target_link_libraries(main mymath2)

