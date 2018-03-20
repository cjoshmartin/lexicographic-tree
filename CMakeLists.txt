cmake_minimum_required(VERSION 3.9)
project(lexicographic-tree)

set(CMAKE_CXX_STANDARD 11)

add_executable(lexicographic-tree main.cpp lexicographic/lexicographic.cpp lexicographic/lexicographic.h node/node.h string_formater/string_formater.cpp string_formater/string_formater.h)