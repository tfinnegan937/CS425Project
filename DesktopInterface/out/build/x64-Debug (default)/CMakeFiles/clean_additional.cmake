# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DesktopInterface_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DesktopInterface_autogen.dir\\ParseCache.txt"
  "DesktopInterface_autogen"
  )
endif()
