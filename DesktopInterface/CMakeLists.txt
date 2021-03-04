# cmake_minimum_required(VERSION <specify CMake version here>)
project(DesktopInterface)

cmake_minimum_required(VERSION 3.17)

#COMMENT OUT THE BELOW AND REPLACE THE GIVEN PATH WITH THE LOCATION OF Qt5 6.0.0 ON YOUR MACHINE
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Widgets REQUIRED)
set(CMAKE_CXX_STANDARD 20)
set(dir ${CMAKE_CURRENT_SOURCE_DIR})
link_directories(${dir}/../shared_lib)
include_directories(${dir}/../shared_include)
#THIS BUILDS TO THE UNREALENGINE GAME BINARY DIRECTORY
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir}/../Binaries/Win64/)

set ( SOURCES
main.cpp
DesktopInterface.cpp
QDataControlWidget.cpp
QHomeWindow.cpp
QResultsWindow.cpp
QVRControlWidget.cpp
)

set ( MAIN_HEADERS
DesktopInterface.h
QDataControlWidget.h
QHomeWindow.h
QResultsWindow.h
QVRControlWidget.h
)

set ( EXTRA_HEADERS
APPLICATION_CONSTANTS.h
)

set ( UI_HEADERS
QResultsWindow.ui
)

add_executable(DesktopInterface ${SOURCES} ${MAIN_HEADERS} ${EXTRA_HEADERS} ${UI_HEADERS})
target_link_libraries(DesktopInterface Qt5::Widgets libUnrealIPCInterface.a)
