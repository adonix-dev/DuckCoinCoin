//
// Created by Antony Laget on 02/02/2018.
//

#include "Block.h"

typedef struct s_Block{

    unsigned char   index;
    time_t          timestamp;
    BYTE            last_hash[32];
    unsigned char   nb_transactions;
    Transactions    transactions;
    BYTE            merklel_root_hash[32];
    BYTE            current_hash[32];
    unsigned char   nonce;
    struct s_Block* next_block;

} Block;

struct s_Blocks{
    Block* tail;
    size_t size;
};

Blocks blocks(){
    Blocks blocks = (Blocks)malloc(sizeof(struct s_Blocks));
    blocks->tail = NULL;
    blocks->size = 0;
    return blocks;
}

Blocks new_block(Blocks b){


    Block *new_block = malloc(sizeof(Block));
    Block *tmp;


    //stpcpy(new->details, buffer);
    new_block->index = 1;
    new_block->timestamp = time(NULL);
    strcpy(new_block->last_hash, "Genesis");
    new_block->nb_transactions    = 0;
    strcpy(new_block->merklel_root_hash, "merklel_root_hash");
    strcpy(new_block->current_hash, "current_block_hash");
    new_block->nonce = 0;
    new_block->next_block = NULL;

    if(b->tail == NULL) b->tail = new_block;
    else tmp->next_block = new_block;

    tmp = new_block;
    ++(b->size);

    return b;
}

BYTE* get_block_info(Transactions t, BYTE index){

}


/*
Blocks get_first_block(BYTE nb_of_transaction){


   block->index              = 1;
    block->timestamp          = time(NULL);
    strcpy(block->last_hash, "Genesis");
    block->nb_transactions    = 0;
    block->transactions       = NULL;
    strcpy(block->merklel_root_hash, "merklel_root_hash");
    strcpy(block->current_hash, "current_block_hash");
    block->nonce = 0;
    block->next_block = NULL;
}*/

/*
Block new_block(Block last_block){



    return last_block;

}*/