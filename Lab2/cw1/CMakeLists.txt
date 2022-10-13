cmake_minimum_required(VERSION 3.23)
project(cw1)

set(CMAKE_CXX_STANDARD 14)

add_executable(cw1 main.cpp Figure.cpp Figure.h Square.cpp Square.h Circle.cpp Circle.h Employee.cpp Employee.h Developer.cpp Developer.h TeamLeader.cpp TeamLeader.h)
