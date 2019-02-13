cmake_minimum_required(VERSION 3.13)
project(algorithms)

set(CMAKE_CXX_STANDARD 14)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")

set(SOURCE_FILES
  ${PROJECT_SOURCE_DIR}/src/models/node/Node.cpp
)

set(HEADER_FILES
  ${PROJECT_SOURCE_DIR}/src/models/node/Node.h
)

add_library(algorithms ${SOURCE_FILES} ${HEADER_FILES})
add_executable(app ${PROJECT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(app algorithms)

###############################################################################
## Testing
###############################################################################

# coverage
SET(CMAKE_CXX_FLAGS="-g -O0 -Wall -W -Wshadow -Wunused-variable -Wunused-parameter -Wunused-function -Wunused -Wno-system-headers -Wno-deprecated -Woverloaded-virtual -Wwrite-strings -fprofile-arcs -ftest-coverage")
SET(CMAKE_C_FLAGS="-g -O0 -Wall -W -fprofile-arcs -ftest-coverage")
SET(CMAKE_EXE_LINKER_FLAGS="-fprofile-arcs -ftest-coverage")

if($ENV{TRAVIS})
  if($ENV{TRAVIS} STREQUAL "true")
    message(STATUS "Building on Travis-CI.")
    set(IS_TRAVIS_BUILD TRUE)
  endif()
endif()

enable_testing()

if(NOT TARGET Catch)
  include(ExternalProject)

  set(ALG_FETCH_EXTERNAL_CATCH
    GIT_REPOSITORY https://github.com/philsquared/Catch.git
    GIT_TAG fc495ba0cbea0d935436ecc94ab32ea1db8e00c9
  )

  ExternalProject_Add(Catch-External
    PREFIX ${CMAKE_BINARY_DIR}/external/Catch
    ${ALG_FETCH_EXTERNAL_CATCH}
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/external/Catch/src/Catch-External/single_include/catch.hpp
    ${CMAKE_BINARY_DIR}/external/Catch/include/catch.hpp
  )

  add_library(Catch INTERFACE)
  add_dependencies(Catch Catch-External)
  target_include_directories(Catch INTERFACE ${CMAKE_BINARY_DIR}/external/Catch/include)
endif()

add_executable(node-tests ${PROJECT_SOURCE_DIR}/tests/models/NodeTests.cpp)
target_link_libraries(node-tests algorithms Catch)
add_test(NAME NodeTests COMMAND node-tests)