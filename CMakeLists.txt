# General
cmake_minimum_required(VERSION 3.14)
project(tlib VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Library
add_library(tlib STATIC src/lib.cpp)
# target_include_directories(tlib PUBLIC include/)

target_include_directories(tlib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

