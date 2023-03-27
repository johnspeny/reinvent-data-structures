cmake_minimum_required (VERSION 3.8)

# project name is ReinventDataStructures (RDS)
project (ReinventDataStructures LANGUAGES CXX)

# set root paths
set(RDS_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR}) # current director where this cmakelist is
set(CMAKE_MODULE_PATH ${RDS_ROOT_PATH}/cmake/Modules/) # path to modules folder

# include build sets
include(RDSBuildSet) # include all that is in modules/RDSBuildSet.cmake here

# data structures
# RDS_BINARY_PATH is located in modules/RDSBuildSet.cmake
add_subdirectory(${RDS_ROOT_PATH}/data-structures ${RDS_BINARY_PATH}/data-structures)

# add_subdirectory for executable or src
add_subdirectory (${RDS_ROOT_PATH}/src ${RDS_BINARY_PATH}/executable)

