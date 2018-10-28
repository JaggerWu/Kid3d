cmake_minimum_required(VERSION 2.6)
  
project(Kid3d)

option(BUILD_OGL43 "Bild OpenGL 4.3 examples" OFF)
mark_as_advanced(BUILD_OGL43)

find_package(OpenGL REQUIRED)

add_subdirectory(glfw)
add_subdirectory(glxw)

include_directories(glfw/include)
include_directories(glm)
include_directories(${CMAKE_BINARY_DIR}/glxw/include)
