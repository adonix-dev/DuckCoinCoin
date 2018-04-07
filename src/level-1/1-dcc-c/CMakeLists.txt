cmake_minimum_required(VERSION 3.9)
project(1_dcc_c C)

set(CMAKE_C_STANDARD 99)

add_executable(
		1_dcc_c main.c
		c-lib/sha256/sha256.c       c-lib/sha256/sha256.h
        c-lib/sha256/sha256_utils.c c-lib/sha256/sha256_utils.h
        database/Blockchain.c database/Blockchain.h
        database/Transaction.c database/Transaction.h)