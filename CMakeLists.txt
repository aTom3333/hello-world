cmake_minimum_required(VERSION 3.2)

project(hello-world)

add_executable(hello-world main.cpp hello.hpp hello.cpp)

add_executable(hello-test hello.hpp hello.cpp test.cpp)
enable_testing()
add_test(test hello-test)