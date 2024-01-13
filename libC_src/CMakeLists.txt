cmake_minimum_required(VERSION 3.27)
project(libC_src C)

set(CMAKE_C_STANDARD 90)

add_library(libC_src STATIC library.c)
