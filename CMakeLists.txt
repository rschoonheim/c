cmake_minimum_required(VERSION 3.26)
project(foundation C)

set(CMAKE_C_STANDARD 23)

add_executable(
        c_01_hello_world
        topics/c/01_hello_world/main.c
)

add_executable(
        c_02_read_cli_input
        topics/c/02_read_cli_input/main.c
)
