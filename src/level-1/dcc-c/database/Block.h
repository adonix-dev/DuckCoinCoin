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

//Blocks get_first_block(BYTE nb_of_transaction);

//Blocks new_block(Blocks last_block);

Blocks blocks();

Blocks new_block(Blocks b);

BYTE* get_block_info(Transactions t, BYTE index);
