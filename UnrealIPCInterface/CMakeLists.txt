cmake_minimum_required(VERSION 3.17)
project(UnrealIPCInterface)

set(CMAKE_CXX_STANDARD 14)
link_directories(./lib)
set(dir ${CMAKE_CURRENT_SOURCE_DIR})
include_directories(./include/boost-1_64/ ${dir}/../shared_include/)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${dir}/../shared_lib)
add_library(UnrealIPCInterface UnrealIPCController.cpp  SharedMemoryBuffer.h)