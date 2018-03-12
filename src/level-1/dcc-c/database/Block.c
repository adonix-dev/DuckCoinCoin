//
// Created by Antony Laget on 02/02/2018.
//

#include "Block.h"

struct s_Block{

    unsigned char   index;
    time_t          timestamp;
    BYTE            last_hash[32];
    unsigned char   nb_transactions;
    Transactions    transactions;
    BYTE            merklel_root_hash[32];
    BYTE            current_hash[32];
    unsigned char   nonce;
    struct Block*   next_block;

};

Block get_first_block(BYTE nb_of_transaction){

    Block block = (Block)malloc(sizeof(struct s_Block));
    block->index              = 1;
    block->timestamp          = time(NULL);
    strcpy(block->last_hash, "Genesis");
    block->nb_transactions    = 0;
    block->transactions       = NULL;
    strcpy(block->merklel_root_hash, "merklel_root_hash");
    strcpy(block->current_hash, "current_block_hash");
    block->nonce = 0;
    block->next_block = NULL;
}

Block new_block(Block last_block, unsigned char last_index){


   //
    return last_block;

}