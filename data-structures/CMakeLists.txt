# RDS is Reinvent Data Structures

set(lib_name rds_libs)

project(${lib_name})

include(array-based-lists/CMakeLists.txt)

set(RDS_HEADER ${RDS_ARRAY_BASED_HEADER})

set(RDS_SRC ${RDS_ARRAY_BASED_SRC})

list(APPEND RDS_SRC ${RDS_HEADER})

add_library(${lib_name} ${RDS_SRC})

# use thirdparty libs
add_subdirectory(${RDS_ROOT_PATH}/thirdparty ${RDS_BINARY_PATH}/thirdparty)

target_include_directories(${lib_name}
	PUBLIC ${CMAKE_SOURCE_DIR}/data-structures
	PUBLIC ${CMAKE_SOURCE_DIR}/thirdparty
)

set_target_properties(${lib_name}
                      PROPERTIES
                      ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
                      LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
                      RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
                      FOLDER "Internal"
                      )