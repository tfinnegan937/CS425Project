# cmake_minimum_required(VERSION <specify CMake version here>)
project(DesktopInterface)



set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}")


cmake_minimum_required(VERSION 3.17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


find_package(Qt5Widgets REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Python3 3.9 REQUIRED)
find_package(PythonLibs 3.9 REQUIRED)
set(CMAKE_CXX_STANDARD 14)
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

set ( SOURCES
    DesktopInterface.cpp
    QHomeWindow.cpp
    QSimulationControlPane.cpp
    QPatientDataPane.cpp
    QResultsPane.cpp
    QSimulationControls.cpp
    csvsaveload.cpp
    PatientData.cpp
    PatientData.h
    PDFGenerator.cpp
    WindowsIPCControls.cpp
    TempCSVLoader.cpp
)

set ( MAIN_HEADERS
    DesktopInterface.h
    QHomeWindow.h
    QSimulationControlPane.h
    QPatientDataPane.h
    QResultsPane.h
    QSimulationControls.h
    csvsaveload.h
    PDFGenerator.h
    TempCSVLoader.h
)

set ( EXTRA_HEADERS
APPLICATION_CONSTANTS.h
${PARENT_DIRECTORY}/shared_include/EyeFrameData.h
${PARENT_DIRECTORY}/shared_include/EyeSessionData.h
${PARENT_DIRECTORY}/shared_include/FullPatientData.h
${PARENT_DIRECTORY}/shared_include/FullPatientData.cpp
${PARENT_DIRECTORY}/shared_include/EyeTestEnum.h
${PARENT_DIRECTORY}/shared_include/TempCSVFiles.h
)


add_executable(DesktopInterface main.cpp ${SOURCES} ${MAIN_HEADERS} ${EXTRA_HEADERS})
target_link_libraries(DesktopInterface Qt5::Widgets Qt5::Core libUnrealIPCInterface.a ${PYTHON_LIBRARIES})
add_custom_target(
        TARGET DesktopInterface
        POST_BUILD
        COMMAND cmd //C InstallPythonDependencies.bat
)

#Copies python files over to build
configure_file(generatePDF.py ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/generatePDF.py COPYONLY)
configure_file(graph_generator.py ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/graph_generator.bat COPYONLY)
