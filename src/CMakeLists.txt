set(target_name ReinventDataStructures)

add_executable(${target_name} main.cpp)

target_link_libraries(${target_name} PRIVATE rds_libs)

