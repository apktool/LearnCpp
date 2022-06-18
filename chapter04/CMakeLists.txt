CMAKE_MINIMUM_REQUIRED(VERSION 3.22)
PROJECT(chapter04)

MESSAGE("C++ Primer 5th - section 17th ~ 19th")

SET(CMAKE_CXX_STANDARD 20)

FILE(GLOB_RECURSE source "*.h" "*.cc")

SET(section17 ${source})
LIST(FILTER section17 INCLUDE REGEX "src/stl")
ADD_EXECUTABLE(stl.out ${section17})

