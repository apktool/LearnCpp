CMAKE_MINIMUM_REQUIRED(VERSION 3.21)
PROJECT(dt-demo VERSION 1.0.0)

MESSAGE(${PROJECT_NAME}-${PROJECT_VERSION})

SET(CMAKE_CXX_STANDARD 20)
SET(dt_demo_root_dir ${PROJECT_SOURCE_DIR})
SET(dt_demo_execute_file_name dt-demo.out)
SET(dt_demo_source_binary_file_name dt-demo-source.a)

OPTION(dt_demo_test "DT_DEMO TEST BUILD" ON)

ADD_SUBDIRECTORY(src)

if (${dt_demo_test})
    ADD_SUBDIRECTORY(third_party)
    ADD_SUBDIRECTORY(test)
endif ()

# FILE(GLOB_RECURSE dt_demo_source_dir RELATIVE ${dt_demo_root_dir} "*.cc" "*.h")
# LIST(FILTER dt_demo_source_dir EXCLUDE REGEX "test")
# LIST(FILTER dt_demo_source_dir EXCLUDE REGEX "third_party")
# LIST(FILTER dt_demo_source_dir EXCLUDE REGEX "build")

# ADD_EXECUTABLE(${dt_demo_execute_file_name} ${dt_demo_source_binary_file_name})