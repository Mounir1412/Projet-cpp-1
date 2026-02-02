# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\fournisseurs_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\fournisseurs_autogen.dir\\ParseCache.txt"
  "fournisseurs_autogen"
  )
endif()
