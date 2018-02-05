//
// Created by Antony Laget on 02/02/2018.
//

#include "Block.h"

struct s_Block{

    short           index;
    time_t          timestamp;
    BYTE            last_hash;
    short           nb_transactions;
    Transaction     transactions;
    BYTE            merklel_root_hash;
    BYTE            current_hash;
    short           nonce;
    struct Block*   next_block;

};