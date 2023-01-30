cmake_minimum_required(VERSION 3.0.0)
project(Calc VERSION 1.0.0)

add_subdirectory(math1)

add_subdirectory(print1)

add_executable(calc 
main.cpp)

target_link_libraries(calc
math1
print1)