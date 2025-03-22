cmake_minimum_required(VERSION 3.27.4)

message("Current source directory: ${CMAKE_CURRENT_SOURCE_DIR}") 

set(supported_languages CXX)

project(
    RunGame
    LANGUAGES ${supported_languages})

include(CTest)
enable_testing()

file(GLOB_RECURSE SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable(RunGame ${SOURCES})

set_property(TARGET RunGame PROPERTY CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0") 

if ( UNIX )
set( CMAKE_CXX_FLAGS_DEBUG_INIT "-fstack-protector" )
elseif( WIN32 )
set( CMAKE_CXX_FLAGS_DEBUG_INIT "/GS" )
endif()