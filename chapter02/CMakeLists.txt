CMAKE_MINIMUM_REQUIRED(VERSION 3.21)
PROJECT(chapter02)

MESSAGE("C++ Primer 5th - section 8th ~ 12th")

SET(CMAKE_CXX_STANDARD 20)

FILE(GLOB_RECURSE source "*.h" "*.cc")

SET(section08 ${source})
LIST(FILTER section08 INCLUDE REGEX "src/io")
ADD_EXECUTABLE(io.out ${section08})

SET(section09 ${source})
LIST(FILTER section09 INCLUDE REGEX "src/container")
ADD_EXECUTABLE(container.out ${section09})

SET(section10 ${source})
LIST(FILTER section10 INCLUDE REGEX "src/generic")
ADD_EXECUTABLE(algorithm.out ${section10})