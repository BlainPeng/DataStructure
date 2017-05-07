cmake_minimum_required(VERSION 3.6.1)
project(LinkList)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.c linkList.c linkList.h)
add_executable(LinkList ${SOURCE_FILES} linkList.c linkList.h)