cmake_minimum_required(VERSION 3.10)
project(sqlite_demo)

set(CMAKE_CXX_STANDARD 14)
aux_source_directory(. SOURCE_DIR)
add_executable(sqlite_demo ${SOURCE_DIR})
#target_link_directories(sqlite_demo .)
# 链接本地的sqlite3库
target_link_libraries(sqlite_demo sqlite3)