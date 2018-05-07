cmake_minimum_required(VERSION 3.9)
project(1_dcc_c C)

set(CMAKE_C_STANDARD 99)

add_executable(
		1_dcc_c main.c
		c-lib/sha256/sha256.c       c-lib/sha256/sha256.h
        c-lib/sha256/sha256_utils.c c-lib/sha256/sha256_utils.h
        database/Blockchain.c 		database/Blockchain.h
		processing/Merkel_Hash.c 	processing/Merkel_Hash.h
		error/Error.c 				error/Error.h
		utils/blockchain_utils.c 	utils/blockchain_utils.h
		gui/gui.c 					gui/gui.h
        gui/Term_canon.c            gui/Term_canon.h
		Config.h
)

find_program( MEMORYCHECK_COMMAND valgrind )
set( MEMORYCHECK_COMMAND_OPTIONS "--trace-children=yes --leak-check=full" )