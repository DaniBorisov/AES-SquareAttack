cmake_minimum_required(VERSION 3.21)
project(AES C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(AES
        AES.c
        AES.h
        sample_usage.c SquareAttack.c SquareAttack.h)
