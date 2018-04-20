cmake_minimum_required(VERSION 3.11)

#set the target name
set(TARGET_NAME runTests)
 
#Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
#Link runTests with what we want to test and the GTest and pthread library
add_executable(${TARGET_NAME} test.cc)
target_link_libraries(${TARGET_NAME} ${GTEST_LIBRARIES} pthread)
