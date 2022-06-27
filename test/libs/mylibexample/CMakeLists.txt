cmake_minimum_required(VERSION 3.1...3.23)

project(
  ModernCMakeExample
  VERSION 1.0
  LANGUAGES C CXX)

add_library(MyLibExample src/simple_lib.cpp include/simple_lib.hpp)
target_include_directories(MyLibExample PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>" "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>")
target_include_directories(MyLibExample PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>")


add_library(CMyLibExample src/simple_lib.c include/simple_lib.h)
target_include_directories(CMyLibExample PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>" "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>")
target_include_directories(CMyLibExample PRIVATE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>")

include(GenerateExportHeader)
generate_export_header(MyLibExample)
generate_export_header(CMyLibExample)
