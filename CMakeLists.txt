cmake_minimum_required(VERSION 3.22)
project(BUSHED)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)

add_executable(BUSHED
        classes.cpp
        classes.h
        LICENSE
        README.md
        main.cpp)
