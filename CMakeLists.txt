cmake_minimum_required(VERSION 3.9)
project(lexicographic-tree)

set(CMAKE_CXX_STANDARD 11)

add_executable(lexicographic-tree main.cpp lexicographic.cpp lexicographic.h node.h string_formater.cpp string_formater.h)