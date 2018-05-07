
#pragma once

#include <stdio.h>
#include "../Config.h"
#include "../error/Error.h"
#include "../database/Blockchain.h"

Blockchain* create_random_blockchain(int number_of_blocks, int difficulty);

void blockchain_integrity_check(Blockchain* blockchain);