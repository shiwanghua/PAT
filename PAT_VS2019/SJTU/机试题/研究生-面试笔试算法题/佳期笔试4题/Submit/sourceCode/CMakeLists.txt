cmake_minimum_required(VERSION 3.15)
project(ForExam)

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a -pthread ")

set(CMAKE_CXX_STANDARD 20)

aux_source_directory(. SRC_LIST)
add_executable(ForExam ${SRC_LIST} ProblemII.cpp ProblemII.h ProblemIII.cpp ProblemIII.h ProblemIV.cpp ProblemIV.h)
