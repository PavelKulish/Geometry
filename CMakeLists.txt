cmake_minimum_required(VERSION 3.17)
project(geometry)

add_subdirectory(src)

add_executable(MAIN main.cpp)
target_link_libraries(MAIN ${PROJECT_NAME})
