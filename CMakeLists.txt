cmake_minimum_required(VERSION 3.10)

SET(CMAKE_CXX_FLAGS "-O0")
SET(CMAKE_C_FLAGS "-O0")

# set the project name
project(C++++)

add_subdirectory(include/Rules)

# add the executable
include_directories(include)
add_executable(LRVALUE include/LRvalue/LRvalue.cpp)
add_executable(RULES include/Rules/rules.cpp)
target_link_libraries(RULES PUBLIC Rules)
# target_include_directories(RULES PUBLIC
#     "${PROJECT_BINARY_DIR}"
#     "${PROJECT_SOURCE_DIR}/Rules")

add_executable(SMART include/SmartPtr/smart_ptr_example.cpp)
target_link_libraries(SMART PUBLIC Rules)

# target_include_directories(SMART PUBLIC
#     "${PROJECT_BINARY_DIR}"
#     "${PROJECT_SOURCE_DIR}/Rules")

# build multiple binaries
add_executable(TYPE include/TypeDeduction/type_deduction.cpp)
