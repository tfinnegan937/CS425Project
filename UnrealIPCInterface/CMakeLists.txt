cmake_minimum_required(VERSION 3.17)
project(UnrealIPCInterface)

set(CMAKE_CXX_STANDARD 14)
link_directories(./lib)
include_directories(./include/boost-1_64/)
add_library(UnrealIPCInterface STATIC UnrealIPCController.h UnrealIPCController.cpp  SharedMemoryBuffer.h)