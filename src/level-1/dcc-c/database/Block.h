//
// Created by Antony Laget on 02/02/2018.
//

#pragma once

#include <time.h>
#include <string.h>
#include <stdlib.h> //for malloc
#include "../c-lib/sha256/sha256_utils.h"
#include "Transaction.h"

typedef struct s_Blocks* Blocks;

Blocks blocks();

Blocks new_block(Blocks b);

/*
 * DEBUG FUNCTION
 */
BYTE* get_block_info(Blocks b, BYTE index);
