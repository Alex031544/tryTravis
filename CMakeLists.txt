cmake_minimum_required(VERSION 3.5)

add_subdirectory(src/Shape)

SET(CMAKE_CXX_FLAGS "--coverage")

add_executable (
	prog
	main.cpp
)

target_link_libraries( prog
	Shape
)

add_dependencies(prog Shape)
