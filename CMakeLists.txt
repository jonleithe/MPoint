cmake_minimum_required(VERSION 3.16)

project(MPoint VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(point
    main.cpp
    src/point.cpp
)

target_include_directories(point PRIVATE ${CMAKE_SOURCE_DIR}/inc)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(point PRIVATE -Wall -Wextra -Wpedantic)
endif()

set_target_properties(point PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)
