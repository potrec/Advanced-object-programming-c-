cmake_minimum_required(VERSION 3.23)
project(lab1)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab1 main.cpp Person.cpp Teacher.h Teacher.cpp Person.h Student.cpp Student.h)
