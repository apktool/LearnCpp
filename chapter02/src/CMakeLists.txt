FILE(GLOB_RECURSE dt_demo_source_dir RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.h" "*.cc")
ADD_EXECUTABLE(${PROJECT_NAME}-source ${dt_demo_source_dir})