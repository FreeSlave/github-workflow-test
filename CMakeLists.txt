cmake_minimum_required(VERSION 3.10)

project(main)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

include(LibraryNaming)

add_executable(main main.cpp)

