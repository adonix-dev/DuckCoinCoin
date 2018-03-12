//
// Created by Antony Laget on 02/02/2018.
//

#pragma once

#include <time.h>
#include <string.h>
#include "../c-lib/sha256/sha256_utils.h"
#include "Transaction.h"

typedef struct s_Block *Block;

Block get_first_block(BYTE nb_of_transaction);

Block new_block(Block last_block);


