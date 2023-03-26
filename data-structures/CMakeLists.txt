# RDS is Reinvent Data Structures

set(lib_name rds_libs)

include(array-based-lists/CMakeLists.txt)

set(RDS_HEADER ${RDS_ARRAY_BASED_HEADER})

set(RDS_SRC ${RDS_ARRAY_BASED_SRC})

list(APPEND RDS_SRC ${RDS_HEADER})

add_library(${lib_name} ${RDS_SRC})

target_include_directories(${lib_name} PUBLIC ${CMAKE_SOURCE_DIR}/data-structures)


