cmake_minimum_required(VERSION 3.16)
project(chapter01)

message("Hello Alan, Start Compile")

set(CMAKE_CXX_STANDARD 20)

add_executable(
        app-basic.so
        src/AppBasic.h src/AppBasic.cc
        src/basic/DataType.h src/basic/DataType.cc
        src/basic/ProcessStructure.h src/basic/ProcessStructure.cc
        src/basic/ArrayDemo.h src/basic/ArrayDemo.cc
        src/basic/FunctionDemo.h src/basic/FunctionDemo.cc
        src/basic/PointDemo.h src/basic/PointDemo.cc
        src/basic/ReferenceDemo.h src/basic/ReferenceDemo.cc
)
