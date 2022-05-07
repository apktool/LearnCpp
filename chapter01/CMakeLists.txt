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

add_executable(
        app-medium.so
        src/AppMedium.h src/AppMedium.cc
        src/medium/StructDemo.h src/medium/StructDemo.cc
        src/medium/FunctionExamp.h src/medium/FunctionExamp.cc
        src/medium/ClassDemo.h src/medium/ClassDemo.cc
        src/medium/InheritDemo.h src/medium/InheritDemo.cc
        src/medium/VirtualDemo.h src/medium/VirtualDemo.cc
        src/medium/FileDemo.h src/medium/FileDemo.cc
        src/medium/TemplateDemo.h src/medium/TemplateDemo.cc
)

add_executable(
        app-advance.so
        src/AppAdvance.h src/AppAdvance.cc
        src/advance/StringDemo.h src/advance/StringDemo.cc
        src/advance/VectorDemo.h src/advance/VectorDemo.cc
        src/advance/DequeDemo.h src/advance/DequeDemo.cc
        src/advance/StackDemo.h src/advance/StackDemo.cc
        src/advance/QueueDemo.h src/advance/QueueDemo.cc
        src/advance/ListDemo.h src/advance/ListDemo.cc
        src/advance/SetDemo.h src/advance/SetDemo.cc
        src/advance/PairDemo.h src/advance/PairDemo.cc
        src/advance/MapDemo.h src/advance/MapDemo.cc
        src/advance/FunctionalDemo.h src/advance/FunctionalDemo.cc
)

add_executable(
        app-algorithm.so
        src/AppAlgorithm.h src/AppAlgorithm.cc
        src/algorithm/TraverseDemo.h src/algorithm/TraverseDemo.cc
        src/algorithm/FindDemo.h src/algorithm/FindDemo.cc
        src/algorithm/AggDemo.h src/algorithm/AggDemo.cc
        src/algorithm/SortDemo.h src/algorithm/SortDemo.cc
        src/algorithm/ReplaceDemo.h src/algorithm/ReplaceDemo.cc
        src/algorithm/ArithmeticDemo.h src/algorithm/ArithmeticDemo.cc
        src/algorithm/CollectionDemo.h src/algorithm/CollectionDemo.cc
)