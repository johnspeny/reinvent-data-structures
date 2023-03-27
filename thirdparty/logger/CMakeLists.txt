set(lib_name logger)

project(${lib_name})

set(LOGGER_HEADER
	logger.h
)

set(LOGGER_SRC
	logger.cpp
)

list(APPEND LOGGER_SRC ${LOGGER_HEADER})

add_library(${lib_name} ${LOGGER_SRC})

target_include_directories(${lib_name} PUBLIC .)