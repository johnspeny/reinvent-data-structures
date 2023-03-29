project(thirdparty)

# function to change properties eg builds of libs
function(configure_target_outdir target)
    set_target_properties(${target} PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        FOLDER "ThirdParty"
    )
endfunction()

# turn this into a target (0^0)//a cheat haha 
# by adding empty to lib
add_library(thirdparty STATIC empty.cpp)

# header only library to use
# fmt and exclude from build
add_subdirectory(fmt EXCLUDE_FROM_ALL)
target_link_libraries(thirdparty fmt-header-only)

# none header only below
# logger
add_subdirectory(logger)
target_link_libraries(thirdparty logger)
configure_target_outdir(logger)

# nanobench
add_subdirectory(nanobench)
target_link_libraries(thirdparty nanobench)
configure_target_outdir(nanobench)


# spdlog
add_subdirectory(spdlog)
target_link_libraries(thirdparty spdlog_header_only)
configure_target_outdir(spdlog)