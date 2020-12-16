# cmake_minimum_required(VERSION <specify CMake version here>)
project(DesktopInterface)

cmake_minimum_required(VERSION 3.17)

#COMMENT OUT THE BELOW AND REPLACE THE GIVEN PATH WITH THE LOCATION OF Qt5 6.0.0 ON YOUR MACHINE
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Widgets REQUIRED)
set(CMAKE_CXX_STANDARD 20)

add_executable(DesktopInterface main.cpp DesktopInterface.cpp QDataControlWidget.cpp QHomeWindow.cpp QVRControlWidget.cpp)
target_link_libraries(DesktopInterface Qt5::Widgets)
