
LIST(APPEND folders basic)
FOREACH (folder ${folders})
    FILE(GLOB srcs ${folder}/*.cc)
ENDFOREACH ()

FIND_PACKAGE(GTest CONFIG REQUIRED)

LIST(APPEND test_libraries GTest::gtest gtest_main)

FOREACH (item ${srcs})
    GET_FILENAME_COMPONENT(target_name ${item} NAME_WE)
    ADD_EXECUTABLE(${target_name} ${item})
    TARGET_LINK_LIBRARIES(${target_name} lib_ch_07 ${test_libraries})
    ADD_TEST(NAME ${target_name} COMMAND ${target_name})
ENDFOREACH ()