cmake_minimum_required(VERSION 3.19)
project(Cadett C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Cadett
        function.c
        main.c
        main.h)
