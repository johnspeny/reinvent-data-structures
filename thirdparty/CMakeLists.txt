project(thirdparty)

function(configure_target_outdir target)
    set_target_properties(${target} PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        FOLDER "ThirdParty"
    )
endfunction()

# header only library to use
# fmt and exclude from build
# add_subdirectory(fmt EXCLUDE_FROM_ALL)



# Add all 3rd party here
# logger
add_subdirectory(logger)
configure_target_outdir(logger)
