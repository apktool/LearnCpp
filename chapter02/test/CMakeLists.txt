SET(test_target_name dt_demo_test)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/third_party/gtest/googletest/include)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/src)

FILE(GLOB_RECURSE dt_demo_test_dir RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*_test.h" "*_test.cc")
ADD_EXECUTABLE(${test_target_name} ${dt_demo_test_dir})

INCLUDE(GoogleTest)
enable_testing()
TARGET_LINK_LIBRARIES(${test_target_name} gtest_main)
GTEST_DISCOVER_TESTS(${test_target_name})