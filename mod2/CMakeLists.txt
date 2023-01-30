cmake_minimum_required(VERSION 3.0.0)
project(Calc VERSION 1.0.0)

add_subdirectory(math1
print1)

add_library(math1
add1.cpp
div1.cpp)

add_library(print1
printVal.cpp)

add_executable(calc 
main.cpp)

target_link_libraries(calc
math1
print1)