set(_ARRAY_STACK_SRC
	ArrayStack.cpp
)

add_library(ArrayStack ${_ARRAY_STACK_SRC})

target_include_directories(ArrayStack PUBLIC include)
