cmake_minimum_required(VERSION 3.1.0)
project(compil3)

# prevent for in-source building
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON)
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
  message(SEND_ERROR "In-source builds are not allowed.")
endif ()

add_definitions(-DPROJECTPATH=\"${PROJECT_SOURCE_DIR}\")

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall")

set(INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${INCLUDES})

# Definicje dla warunkowej kompilacji
option(ENABLE_FULL_FUNCTIONALITY "Enable full grep functionality" ON)
option(ENABLE_BROKEN_VERSION "Enable version with linking error" ON)

if(ENABLE_BROKEN_VERSION)
    add_compile_definitions(BROKEN_VERSION)
    message(STATUS "BROKEN_VERSION enabled - linking error expected")
endif()

if(ENABLE_FULL_FUNCTIONALITY)
    add_compile_definitions(FULL_FUNCTIONALITY)
    message(STATUS "FULL_FUNCTIONALITY enabled")
endif()

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_executable(${PROJECT_NAME} main.cpp ${SOURCES})