cmake_minimum_required(VERSION 3.21)
project(personManager)

set(CMAKE_CXX_STANDARD 23)
add_compile_options(-Wall)

add_executable(personManager main.cpp Student.cpp Student.h Employee.cpp Employee.h Person.cpp Person.h)
