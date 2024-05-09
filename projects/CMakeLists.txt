cmake_minimum_required(VERSION 3.2)

project(Projects)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
endif(MSVC)

include(cmake/function.cmake)

add_subdirectory(executor)
add_subdirectory(utils)

