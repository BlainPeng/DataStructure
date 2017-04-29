cmake_minimum_required(VERSION 3.6.1)
project(SequentList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.c sequentList.c sequentList.h)
add_executable(SequentList ${SOURCE_FILES})