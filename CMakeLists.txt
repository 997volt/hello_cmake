cmake_minimum_required(VERSION 3.18)
project(Hello_CMake VERSION 1.0)

add_library(
    say-hello 
    hello.h 
    hello.c
)

add_executable(cmake-good main.c)

target_link_libraries(cmake-good PRIVATE say-hello)