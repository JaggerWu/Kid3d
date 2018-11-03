cmake_minimum_required(VERSION 2.6)
  
project(Kid3d)

option(BUILD_OGL43 "Bild OpenGL 4.3 examples" OFF)
mark_as_advanced(BUILD_OGL43)

find_package(OpenGL REQUIRED)
