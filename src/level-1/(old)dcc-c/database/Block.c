//
// Created by Antony Laget on 02/02/2018.
//

#include "Block.h"

typedef struct s_Block{

    BYTE            index;
    time_t          timestamp;
    BYTE            last_hash[32];
    BYTE            nb_transactions;
    Transactions    transactions;
    BYTE            merklel_root_hash[32];
    BYTE            current_hash[32];
    BYTE            nonce;
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
    strcpy((char*)new_block->last_hash, "Genesis");
    new_block->nb_transactions = 0;
    new_block->transactions = transactions();
    strcpy((char*)new_block->merklel_root_hash, "merklel_root_hash");
    strcpy((char*)new_block->current_hash, "current_block_hash");
    new_block->nonce = 0;
    new_block->next_block = NULL;

    if(b->tail == NULL){
        b->tail = new_block;
    }
    else{
        BYTE index_tmp = tmp->index;
        new_block->index = tmp->index + (BYTE)1;
        tmp->next_block = new_block;
    }

    tmp = new_block;

    ++(b->size);

    return b;
}


/*
 * DEBUG FUNCTION
 */
BYTE* get_block_info(Blocks b, BYTE index){

    assert(index <= b->size);
    assert(b->tail != NULL);

    if(index <= b->size) {

        Block *tmp = b->tail;
        for (int i = 0; i < index; ++i) tmp = tmp->next_block;
        return tmp->merklel_root_hash;
    }
    else{
        fprintf(stderr, "block: Trying to access to a none allocated area");
        return (BYTE*)"block: error";
    } 
}

BYTE* hash_two_string(BYTE* A, BYTE* B){
    char* hashRes;
    BYTE concat[sizeof(A) + sizeof(B)];
    snprintf((char*)concat, sizeof(A) + sizeof(B), "%s%s", A, B);
    sha256ofString(concat, hashRes);
    return (BYTE*)hashRes;

}


void create_transactions(Block* b, BYTE nb_transactions){

    for (int i = 0; i < nb_transactions; ++i){
        b->transactions = new_transaction(b->transactions);
        ++(nb_transactions);
    }
}

void add_transactions(Blocks b, BYTE num_block, BYTE nb_transactions){

    //printf("%d\n", 3);
    Block *tmp = b->tail;
    Transactions* t;

    if(num_block <= b->size) {
        //printf("%d\n", num_block);
        for (int i = 0; i < num_block; ++i){
            tmp = tmp->next_block;
        }
        //printf("%d\n", 3);

        unsigned int random_nb_transactions = (unsigned int)(rand()%(nb_transactions-1)+1);

       /* for (int i = 0; i < random_nb_transactions; ++i)
        {
            tmp->transactions = new_transaction(tmp->transactions);
            printf(":%d", i);
            ++(tmp->nb_transactions);
        }*/
    }
    


}
/*
BYTE* get_transaction_info(Transactions t, BYTE index){

    assert(index <= t->size);
    assert(t->tail != NULL);

    if(index <= t->size){

        Transaction *tmp = t->tail;
        for(int i = 0; i < index; ++i) tmp = tmp->next;
        return tmp->details;
    }
    else fprintf(stderr, "transaction: Trying to access to a none allocated area");

}*/

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