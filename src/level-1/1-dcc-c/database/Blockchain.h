
#pragma once

#include <time.h>	//for rand
#include <string.h> //for stpcpy
#include <stdio.h>  //for snprintf et fprintf
#include <stdlib.h> //for malloc
#include "../c-lib/sha256/sha256_utils.h"
#include "Transaction.h"

#define MAX_VALUE 1000      //max transaction amount
#define MAX_VALUE_LENGTH 4  //length of MAX_VALUE

typedef struct s_blockchain Blockchain;

typedef Blockchain* blockchainPtr;

Blockchain* blockchain(int max_transaction, BYTE difficulty);

Blockchain* new_block(Blockchain* b, int max_transaction);

Blockchain* set_block_transactions(Blockchain* b);

void clear_blockchain(blockchainPtr* blockchain);

size_t block_count(Blockchain* blockchain);
