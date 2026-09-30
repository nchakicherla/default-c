cmake_minimum_required(VERSION 3.10)
project(default-c C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(${PROJECT_NAME}
    src/main.c
    src/arena.c
    src/file.c
)
