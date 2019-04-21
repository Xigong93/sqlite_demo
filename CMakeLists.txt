cmake_minimum_required(VERSION 3.10)
project(sqlite_demo)

set(CMAKE_CXX_STANDARD 14)
aux_source_directory(. SOURCE_DIR)
add_executable(sqlite_demo  ${SOURCE_DIR})
