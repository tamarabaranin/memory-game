# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MemoryGame_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MemoryGame_autogen.dir/ParseCache.txt"
  "MemoryGame_autogen"
  )
endif()
