cmake_minimum_required(VERSION 3.8)
project(nanobench LANGUAGES CXX)

add_library(nanobench STATIC ${PROJECT_SOURCE_DIR}/src/test/app/nanobench.cpp)
add_library(nanobench::nanobench ALIAS nanobench)
set_property(TARGET nanobench PROPERTY CXX_STANDARD 17)
target_include_directories(nanobench PUBLIC ${PROJECT_SOURCE_DIR}/src/include)
