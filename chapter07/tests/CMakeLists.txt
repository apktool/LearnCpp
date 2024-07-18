
LIST(APPEND folders basic)
FOREACH (folder ${folders})
    FILE(GLOB heads ${folder}/*.h)
    FILE(GLOB srcs ${folder}/*.cc)
ENDFOREACH ()

MESSAGE("--------------")
MESSAGE("${heads}")
MESSAGE("${srcs}")

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

FIND_PACKAGE(GTest CONFIG REQUIRED)

LIST(APPEND test_libraries GTest::gtest gtest_main)

FOREACH (item ${srcs})
    GET_FILENAME_COMPONENT(target_name ${item} NAME_WE)
    ADD_EXECUTABLE(${target_name} ${item} ${heads})
    TARGET_LINK_LIBRARIES(${target_name} lib_ch_07 ${test_libraries})
    ADD_TEST(NAME ${target_name} COMMAND ${target_name})
ENDFOREACH ()

ADD_EXECUTABLE(ch_gflags.out basic/gflags_test.cc)
TARGET_LINK_LIBRARIES(ch_gflags.out gflags)
