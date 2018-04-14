
#pragma once

#include <time.h>	//for rand
#include <string.h> //for stpcpy
#include <stdio.h>  //for snprintf et fprintf
#include <stdlib.h> //for malloc
#include "../c-lib/sha256/sha256_utils.h"
#include "Transaction.h"

typedef struct s_blockchain Blockchain;

typedef Blockchain* blockchainPtr;

Blockchain* blockchain(int max_transaction, BYTE difficulty);

void clear_blockchain(blockchainPtr* blockchain);

size_t block_count(Blockchain* blockchain);
