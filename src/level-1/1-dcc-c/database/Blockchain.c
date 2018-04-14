
#include "Blockchain.h"

typedef struct s_Block{

    BYTE            index;
    time_t          timestamp;
    BYTE            last_hash[32];
    BYTE            nb_transactions;
    Transactions*   transactions;
    BYTE            merklel_root_hash[32];
    BYTE            current_hash[32];
    unsigned int    nonce;
    struct s_Block* next;
    struct s_Block* previous;

} Block;

struct s_blockchain{

    Block* sentinel;
    BYTE difficulty;
    size_t size;
};

Blockchain* blockchain(int max_transaction, BYTE difficulty){

    Blockchain* blockchain = malloc(sizeof(struct s_blockchain));
    blockchain->sentinel = malloc(sizeof(struct s_Block));
    blockchain->difficulty = difficulty;
    blockchain->size = 0;

    blockchain->sentinel->index = 0;
    blockchain->sentinel->timestamp = time(NULL);
    stpcpy((char*)blockchain->sentinel->last_hash, (char*)"GENESIS");
    blockchain->sentinel->nb_transactions = (BYTE)(rand()%(max_transaction)+1);
    blockchain->sentinel->transactions = NULL;
    stpcpy((char*)blockchain->sentinel->merklel_root_hash, (char*)"merklel_root_hash");
    stpcpy((char*)blockchain->sentinel->current_hash, (char*)"current_hash");
    blockchain->sentinel->nonce = (unsigned int)(rand()%(difficulty)+1);

    blockchain->sentinel->next = blockchain->sentinel;
    blockchain->sentinel->previous = blockchain->sentinel;
    return blockchain;
}
/*-----------------------------------------------------------------*/

Blockchain* new_blockchain(Blockchain* t){

    //struct s_Block* nb = malloc(sizeof(struct s_Block));


}

/*-----------------------------------------------------------------*/

void clear_blockchain(blockchainPtr* blockchain){

    Block* block = (*blockchain)->sentinel;
    Block* tmp;

    do {
        tmp = block->next;
        if(block->transactions != NULL)
            clear_transactions(&block->transactions);
        free(block->next);
        block = tmp;

    } while (block != (*blockchain)->sentinel);
    free(*blockchain);
    *blockchain = NULL;
}

/*-----------------------------------------------------------------*/

size_t block_count(Blockchain* blockchain){
    return blockchain->size;
}