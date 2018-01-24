cmake_minimum_required(VERSION 3.9)
project(ddc_c)

set(CMAKE_CXX_STANDARD 11)

add_executable(ddc_c
        c-lib/sha256/sha256.c
        c-lib/sha256/sha256.h
        c-lib/sha256/sha256_utils.c
        c-lib/sha256/sha256_utils.h main.c)
