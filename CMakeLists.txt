cmake_minimum_required(VERSION 2.8.12)
project(example)

add_subdirectory(pybind11)
set(PYBIND11_CPP_STANDARD -std=c++1z)
pybind11_add_module(example cpp_src/sample.cpp)
