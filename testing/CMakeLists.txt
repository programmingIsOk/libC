cmake_minimum_required(VERSION 3.27)
project(myLibTest C)
include_directories(../dynamic_array)
set(CMAKE_C_STANDARD 90)



add_executable(myLibTest main.c)

add_library(
        dynamic_array STATIC
        ../dynamic_array/library.h
        ../dynamic_array/library.c
)

target_link_libraries(
        myLibTest
        PRIVATE
        dynamic_array
)