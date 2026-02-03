# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\interfacepoubelle_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\interfacepoubelle_autogen.dir\\ParseCache.txt"
  "interfacepoubelle_autogen"
  )
endif()
