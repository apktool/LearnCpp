CMAKE_MINIMUM_REQUIRED(VERSION 3.21)
PROJECT(chapter03)

MESSAGE("C++ Primer 5th - section 13th ~ 16th")

SET(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-fno-elide-constructors ${CMAKE_CXX_FLAGS}")
# ADD_COMPILE_OPTIONS(-fno-elide-constructors)

FILE(GLOB_RECURSE source "*.h" "*.cc")

SET(section13 ${source})
LIST(FILTER section13 INCLUDE REGEX "src/copyassign")
ADD_EXECUTABLE(copyctrl.out ${section13})

SET(section14 ${source})
LIST(FILTER section14 INCLUDE REGEX "src/overload")
ADD_EXECUTABLE(overload.out ${section14})

SET(section15 ${source})
LIST(FILTER section15 INCLUDE REGEX "src/object")
ADD_EXECUTABLE(object.out ${section15})