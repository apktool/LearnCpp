CMAKE_MINIMUM_REQUIRED(VERSION 3.22)
PROJECT(chapter04)

MESSAGE("C++ Primer 5th - section 17th ~ 19th")

SET(CMAKE_CXX_STANDARD 20)
FILE(GLOB_RECURSE source "*.h" "*.cc")

SET(section17 ${source})
LIST(FILTER section17 INCLUDE REGEX "src/stl")
ADD_EXECUTABLE(stl.out ${section17})

SET(section18 ${source})
LIST(FILTER section18 INCLUDE REGEX "src/tool")
ADD_EXECUTABLE(tool.out ${section18})

SET(section19 ${source})
LIST(FILTER section19 INCLUDE REGEX "src/advance")
ADD_EXECUTABLE(sptool.out ${section19})