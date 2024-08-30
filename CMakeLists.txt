cmake_minimum_required(VERSION 3.10)
project(ray-tracing)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(ray_tracer main.cpp)