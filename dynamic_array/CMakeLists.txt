cmake_minimum_required(VERSION 3.27)
project(dynamic_array C)

set(CMAKE_C_STANDARD 90)

add_library(dynamic_array STATIC library.c)
