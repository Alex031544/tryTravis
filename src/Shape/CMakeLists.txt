set(TARGET_NAME Shape)

add_library(
	${TARGET_NAME} SHARED
  Shape.h
	Cuboid.cpp Cuboid.h
)
