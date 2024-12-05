# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Inteface_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Inteface_autogen.dir\\ParseCache.txt"
  "Inteface_autogen"
  )
endif()
