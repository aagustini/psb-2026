cmake_minimum_required(VERSION 3.14)
project(01-aula-1903)

set(CMAKE_C_STANDARD 17)

# Ajusta source e include
include_directories(include)
add_executable(${PROJECT_NAME} src/main.c)
