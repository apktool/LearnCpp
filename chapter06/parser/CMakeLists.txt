CMAKE_MINIMUM_REQUIRED(VERSION 3.23)

SET(FLEX_PATH /opt/flex-2.6.4)
SET(FLEX_INCLUDE_DIRS ${FLEX_PATH}/include)
SET(FLEX_EXECUTABLE ${FLEX_PATH}/bin/flex)
SET(FL_LIBRARY ${FLEX_PATH}/lib/libfl.a)

SET(BISON_PATH /opt/bison-3.8)
SET(BISON_EXECUTABLE ${BISON_PATH}/bin/bison)

# https://cmake.org/cmake/help/latest/module/FindFLEX.html
FIND_PACKAGE(FLEX 2.6 REQUIRED)
# https://cmake.org/cmake/help/latest/module/FindBISON.html
FIND_PACKAGE(BISON 3.8 REQUIRED)

FLEX_TARGET(MyScanner ${CMAKE_CURRENT_SOURCE_DIR}/lexer.l ${CMAKE_CURRENT_SOURCE_DIR}/lexer.flex.cc)
BISON_TARGET(MyParser ${CMAKE_CURRENT_SOURCE_DIR}/grammar.y ${CMAKE_CURRENT_SOURCE_DIR}/grammar.bison.cc
    DEFINES_FILE ${CMAKE_CURRENT_SOURCE_DIR}/parser.bison.h)
ADD_FLEX_BISON_DEPENDENCY(MyScanner MyParser)
ADD_LIBRARY(calc_parser ${FLEX_MyScanner_OUTPUTS} ${BISON_MyParser_OUTPUTS})
TARGET_INCLUDE_DIRECTORIES(calc_parser PUBLIC ${FLEX_PATH}/include)
TARGET_INCLUDE_DIRECTORIES(calc_parser INTERFACE ${CMAKE_CURRENT_BINARY_DIR} )

MESSAGE("scanner outputs ${FLEX_MyScanner_OUTPUTS}")
MESSAGE("parser outputs ${BISON_MyParser_OUTPUTS}")
MESSAGE("flex_bison libraries ${FLEX_LIBRARIES} ${BISON_LIBRARIES}")