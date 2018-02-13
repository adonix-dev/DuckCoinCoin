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

Block newBlock(){

    Block block = (Block)malloc(sizeof(Block));
    block->index              = 1;
    block->timestamp          = 0;
    block->last_hash          = NULL;
    block->nb_transactions    = 0;
    block->transactions       = NULL;
    block->merklel_root_hash  = NULL;
    block->current_hash       = NULL;
    block->nonce              = 0;
    block->next_block         = NULL;
}

