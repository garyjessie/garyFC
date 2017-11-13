# Disable in-source builds to prevent source tree corruption.
#if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
#  message(FATAL_ERROR "
#FATAL: In-source builds are not allowed.
#       You should create separate directory for build files.
#")
#endif()

PROJECT(garyFC)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

ADD_COMPILE_OPTIONS(-std=c++11)
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

ADD_SUBDIRECTORY( AP_Math )
ADD_SUBDIRECTORY( Filter )
ADD_SUBDIRECTORY( AP_HAL )

INCLUDE_DIRECTORIES(./AP_Math/)
INCLUDE_DIRECTORIES(./Filter/)
INCLUDE_DIRECTORIES(./AP_HAL/)

AUX_SOURCE_DIRECTORY(. DIR_SRCS)
ADD_EXECUTABLE(demo ${DIR_SRCS})

TARGET_LINK_LIBRARIES( demo GaryMath GaryFilter GarySystem)
