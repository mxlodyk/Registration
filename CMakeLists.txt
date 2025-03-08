cmake_minimum_required(VERSION 3.28)
project(Registration)

set(CMAKE_CXX_STANDARD 11)

add_executable(Registration main.cpp
        registration.cpp
        registration.h
        unit.cpp
        unit.h)
