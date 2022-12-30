cmake_minimum_required(VERSION 3.10)

set(CMAKE_BUILD_TYPE Debug)

message(STATUS "CURR_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

add_library(re SHARED 
	${CMAKE_CURRENT_SOURCE_DIR}/src/re.c
	${CMAKE_CURRENT_SOURCE_DIR}/include/re.h)


