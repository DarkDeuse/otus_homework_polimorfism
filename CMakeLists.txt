cmake_minimum_required(VERSION 3.25)

project(statistics)

add_executable(statistics main.cpp
                          max.cpp
                          mean.cpp
                          min.cpp
                          std.cpp)
set_target_properties(statistics PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
target_include_directories(statistics PRIVATE include)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
    CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(statistics PRIVATE 
        -g
        -Wall
        -Wextra
        -Werror
        -pedantic
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(statistics PRIVATE
        /EHsc
        /W4
        /WX
    )
endif()

target_compile_features(statistics PUBLIC cxx_std_17)

