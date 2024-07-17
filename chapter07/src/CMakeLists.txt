
LIST(APPEND folders basic)

FOREACH (folder ${folders})
    FILE(GLOB srcs ${folder}/*.cc)
    LIST(FILTER srcs EXCLUDE REGEX ${folder}/main.cc)
    FILE(GLOB heads ${folder}/*.h)
ENDFOREACH ()


FIND_PACKAGE(gflags REQUIRED)
LIST(APPEND libraries gflags)

ADD_LIBRARY(lib_ch_07 OBJECT ${srcs} ${heads})
TARGET_LINK_LIBRARIES(lib_ch_07 ${libraries})

ADD_EXECUTABLE(ch_gflags.out basic/ch_gflags.cc)
TARGET_LINK_LIBRARIES(ch_gflags.out gflags)