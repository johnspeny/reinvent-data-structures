cmake_minimum_required (VERSION 3.8)

project (ReinventDataStructures LANGUAGES CXX)

# individual data structures
add_subdirectory(data-structures)

# Include sub-projects.
# add_subdirectory (thirdparty)
add_subdirectory (src)

