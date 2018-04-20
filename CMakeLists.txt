cmake_minimum_required(VERSION 3.11)

#set the target name
set(TARGET_NAME runTests)
 
#Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
#add_executable(${TARGET_NAME} test.cc)
file(GLOB SOURCES "*.cc")
#file(GLOB SOURCES "src/*.cc")
add_executable (${TARGET_NAME} ${SOURCES})

#Link target with what we want to test and the GTest and pthread library
target_link_libraries(${TARGET_NAME} ${GTEST_LIBRARIES} pthread)
