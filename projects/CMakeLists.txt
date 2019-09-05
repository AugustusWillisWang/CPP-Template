cmake_minimum_required (VERSION 2.6)
project (MY_PROJECT)

# Debug settings
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O2 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O2 -Wall")

# Global var def
set(include_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)
set(PROJECT_BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../src/cpp)
set(TEST_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../test)

MESSAGE(STATUS "include folder: " ${include_dir})
include_directories("${PROJECT_BINARY_DIR}" "${include_dir}")

aux_source_directory(../src/cpp SRC_LIST)
MESSAGE(STATUS "src files: " ${SRC_LIST})
#add_executable(MY_PROJECT ${SRC_LIST})
#add_library(demo ${SRC_LIST})
add_executable(MY_PROJECT ${PROJECT_BINARY_DIR}/main.cpp)
add_executable(PIPE ${PROJECT_BINARY_DIR}/apipe.cpp)
add_executable(TEST ${TEST_SOURCE_DIR}/test.cpp)

MESSAGE(STATUS "CMAKE test")
enable_testing()
#add_test (TEST42 MY_PROJECT 42)
add_test (TEST41 MY_PROJECT)
add_test (TEST42 MY_PROJECT)
set_tests_properties(TEST41 PROPERTIES PASS_REGULAR_EXPRESSION "41")
set_tests_properties(TEST42 PROPERTIES PASS_REGULAR_EXPRESSION "42")

add_test (TEST_pipe PIPE 42)
set_tests_properties(TEST_pipe PROPERTIES PASS_REGULAR_EXPRESSION "42")
