# cmake_minimum_required(VERSION <specify CMake version here>)
project(DesktopInterface)

cmake_minimum_required(VERSION 3.17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Python3 3.9 REQUIRED)
find_package(PythonLibs 3.9 REQUIRED)
set(CMAKE_CXX_STANDARD 20)
set(dir ${CMAKE_CURRENT_SOURCE_DIR})
link_directories(${dir}/../shared_lib)
include_directories(${dir}/../shared_include)
#THIS BUILDS TO THE UNREALENGINE GAME BINARY DIRECTORY
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir}/../Binaries/Win64/)
set(PYTHON_LIBRARIES C:/Users/$ENV{USERNAME}/AppData/Local/Programs/Python/Python39/libs/python39.lib)
set(PYTHON_DEBUG_LIBRARIES C:/Users/plays/AppData/Local/Programs/Python/Python39/libs/python39_d.lib)
set(PYTHON_INCLUDE_DIRS C:/Users/$ENV{USERNAME}/AppData/Local/Programs/Python/Python39/include)

link_libraries(${PYTHON_LIBRARIES})
include_directories(${PYTHON_INCLUDE_DIRS})

set ( SOURCES
main.cpp
DesktopInterface.cpp
QHomeWindow.cpp
        QSimulationControlPane.cpp QPatientDataPane.cpp QResultsPane.cpp QSimulationControls.cpp QResultsWindow.cpp)

set ( MAIN_HEADERS
DesktopInterface.h
QHomeWindow.h
        QSimulationControlPane.h QPatientDataPane.h QResultsPane.h QSimulationControls.h QResultsWindow.h)

set ( EXTRA_HEADERS
APPLICATION_CONSTANTS.h
)

set ( UI_HEADERS
QResultsWindow.ui
)

add_executable(DesktopInterface ${SOURCES} ${MAIN_HEADERS} ${EXTRA_HEADERS} ${UI_HEADERS})
target_link_libraries(DesktopInterface Qt5::Widgets Qt5::Core libUnrealIPCInterface.a ${PYTHON_LIBRARIES})

#Copies python files over to build
configure_file(eye_chart.py ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/eye_chart.py COPYONLY)
