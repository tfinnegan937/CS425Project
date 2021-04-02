# cmake_minimum_required(VERSION <specify CMake version here>)
project(DesktopInterface)

set ( COMPILE_FLAGS
    "-Wall -Werror"
    )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}")


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
get_filename_component(PARENT_DIRECTORY ../ ABSOLUTE)
include_directories(${PARENT_DIRECTORY}/shared_include)
#THIS BUILDS TO THE UNREALENGINE GAME BINARY DIRECTORY
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${dir}/../Binaries/Win64/)
#set(PYTHON_LIBRARIES C:/Users/$ENV{USERNAME}/AppData/Local/Programs/Python/Python39/libs/python39.lib)
#set(PYTHON_DEBUG_LIBRARIES C:/Users/plays/AppData/Local/Programs/Python/Python39/libs/python39_d.lib)
#set(PYTHON_INCLUDE_DIRS C:/Users/$ENV{USERNAME}/AppData/Local/Programs/Python/Python39/include)

link_libraries(${PYTHON_LIBRARIES})
include_directories(${PYTHON_INCLUDE_DIRS})
include_directories(unit_tests/)

set ( SOURCES
DesktopInterface.cpp
QHomeWindow.cpp
        QSimulationControlPane.cpp QPatientDataPane.cpp QResultsPane.cpp QSimulationControls.cpp QResultsWindow.cpp csvsaveload.cpp)

set ( MAIN_HEADERS
DesktopInterface.h
QHomeWindow.h
        QSimulationControlPane.h QPatientDataPane.h QResultsPane.h QSimulationControls.h QResultsWindow.h csvsaveload.h)

set ( EXTRA_HEADERS
APPLICATION_CONSTANTS.h
${PARENT_DIRECTORY}/shared_include/EyeFrameData.h
${PARENT_DIRECTORY}/shared_include/EyeSessionData.h
${PARENT_DIRECTORY}/shared_include/FullPatientData.h
${PARENT_DIRECTORY}/shared_include/FullPatientData.cpp
)

set ( UI_HEADERS
QResultsWindow.ui
)

set ( UNIT_TESTS
unit_tests/UnitTestMain.h
unit_tests/TestCSVSaveLoad.cpp
)

add_executable(DesktopInterface main.cpp ${SOURCES} ${MAIN_HEADERS} ${EXTRA_HEADERS} ${UI_HEADERS})
target_link_libraries(DesktopInterface Qt5::Widgets Qt5::Core libUnrealIPCInterface.a ${PYTHON_LIBRARIES})
add_custom_target(
        TARGET DesktopInterface
        POST_BUILD
        COMMAND cmd //C InstallPythonDependencies.bat
)

#Copies python files over to build
configure_file(eye_chart.py ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/eye_chart.py COPYONLY)


#Testing
enable_testing(true)
find_package(Qt5Test REQUIRED)

add_executable(DesktopInterfaceTest ${SOURCES} ${UNIT_TESTS} ${MAIN_HEADERS} ${EXTRA_HEADERS} ${UI_HEADERS})
add_test(NAME DesktopInterfaceTest COMMAND DesktopInterfaceTest)
target_link_libraries(DesktopInterfaceTest PRIVATE Qt5::Test Qt5::Widgets Qt5::Core libUnrealIPCInterface.a ${PYTHON_LIBRARIES})
