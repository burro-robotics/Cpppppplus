cmake_minimum_required(VERSION 3.0.0)
project(Threadz VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Threadz src/threadz.cpp)
add_executable(Taskz src/taskz.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

include(CPack)
