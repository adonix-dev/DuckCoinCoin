#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./c-lib/sha256/sha256_utils.h"

typedef struct Block{

    short index;
    time_t timestamp;
    BYTE last_hash;
    short nb_transactions;
    BYTE* transactions;
    BYTE merklel_root_hash;
    BYTE current_hash;
    short nonce;
    struct Block* next_block;

} Block;

typedef struct Blockchain{

    Block* first_block;

    short difficulty;

    size_t chain_size;

} Blockchain;


void blockchain__init(Blockchain* blockchain, Block* block_index){

    blockchain->chain_size = 1;
    blockchain->difficulty = 0;

    Block* block = NULL;

    if ((block = (Block*)malloc(sizeof(Block*))) == NULL) {
        fprintf(stderr, "%s\n", "First Block: unable to allocate memory");
        exit(-1);
    }

    block_index[0] = *block;

    block->index              = 1;
    block->timestamp          = 0;
    block->last_hash          = 0;
    block->nb_transactions    = 0;
    block->transactions       = NULL;
    block->merklel_root_hash  = 0;
    block->current_hash       = 0;
    block->nonce              = 0;
    block->next_block         = NULL;

    blockchain->first_block = block;

}

/*void add_block(Blockchain* blockchain, Block* block){

    

}*/



int main(void) {
    printf("Hello, World!\n");

    Block* block_index = (Block*)malloc(100*sizeof(Block*));

    Blockchain* blockchain = NULL;

    if ((blockchain = (Blockchain*)malloc(sizeof(Blockchain*))) == NULL) {
        fprintf(stderr, "%s\n", "Blockchain: unable to allocate memory");
        exit(-1);
    }  

    blockchain__init(blockchain, block_index);

    printf("%d", blockchain->first_block->index);











    return 0;
}