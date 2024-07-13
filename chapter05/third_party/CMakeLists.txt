SET(gtest_BUILD_TESTS OFF CACHE BOOL "Build tests")
SET(BUILD_GMOCK OFF CACHE BOOL "Builds the googlemock subproject")
SET(INSTALL_GTEST OFF CACHE BOOL "Enable installation of googletest")
ADD_SUBDIRECTORY(gtest)