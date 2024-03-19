#
# Generic Debug CmakeList file
#
# @author Alex Kaiser

cmake_minimum_required(VERSION 3.5)

project(main) # make sure to change launch config if you change this

set(CMAKE_BUILD_TYPE Debug)

# includes
include_directories(
  include
)


# find header & source
file(GLOB_RECURSE HEADER "include/*.h")
file(GLOB_RECURSE SOURCE "src/*.cpp")

add_executable(${PROJECT_NAME}
  ${SOURCE}
  ${HEADER}
)

source_group("Header include" FILES ${HEADER})
source_group("Source src"     FILES ${SOURCE})