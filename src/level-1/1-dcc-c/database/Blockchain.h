
#pragma once

#include <time.h>	//for rand
#include <string.h> //for stpcpy
#include <stdio.h>  //for snprintf et fprintf
#include <stdlib.h> //for malloc
#include <assert.h>
#include <stdbool.h> //boolean type
#include "../processing/Merkel_Hash.h"

#define MAX_VALUE 1000      //max transaction amount
#define MAX_VALUE_LENGTH 4  //length of MAX_VALUE

typedef struct s_blockchain Blockchain;

typedef Blockchain* blockchainPtr;

Blockchain* blockchain(WORD difficulty);

Blockchain* new_block(Blockchain* b);

Blockchain* set_block_transactions(Blockchain* b);

Blockchain* calculate_merkle_root(Blockchain* b);

Blockchain* hash_block(Blockchain* b);

void clear_blockchain(blockchainPtr* blockchain);

unsigned int block_count(Blockchain* blockchain);
