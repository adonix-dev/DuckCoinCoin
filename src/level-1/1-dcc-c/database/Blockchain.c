#include "../Config.h"
#include "Blockchain.h"

#define TRANSACTION_STR_LENGTH 20 //"Source-Destination"

typedef struct s_Block{

    unsigned int    index;
    time_t          timestamp;
    BYTE            last_hash[SHA256_BLOCK_SIZE*2+1];
    BYTE            nb_transactions;
    BYTE            transaction_details[MAX_TRANSACTION][TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH]; //"Source-Destination : RAND_VALUE"
    BYTE            merklel_root_hash[SHA256_BLOCK_SIZE*2+1];
    BYTE            current_hash[SHA256_BLOCK_SIZE*2+1];
    unsigned int    nonce;
    struct s_Block* next;
    struct s_Block* previous;

} Block;

struct s_blockchain{

    Block* sentinel;
    unsigned int difficulty;
    unsigned int size;
};

/*-----------------------------------------------------------------*/

Blockchain* blockchain(unsigned int difficulty){



    srand((unsigned int)time(NULL));

    Blockchain* blockchain = malloc(sizeof(struct s_blockchain));
    blockchain->sentinel = malloc(sizeof(struct s_Block));
    blockchain->difficulty = difficulty;
    blockchain->size = 0;

    blockchain->sentinel->index = 0;
    blockchain->sentinel->timestamp = time(NULL);
    stpcpy((char*)blockchain->sentinel->last_hash, (char*)"GENESIS");
    blockchain->sentinel->nb_transactions = (BYTE)(rand()%(MAX_TRANSACTION)+1);
    stpcpy((char*)blockchain->sentinel->merklel_root_hash, (char*)"merklel_root_hash");
    stpcpy((char*)blockchain->sentinel->current_hash, (char*)"current_hash");
    blockchain->sentinel->nonce = 0;

    blockchain->sentinel->next = blockchain->sentinel;
    blockchain->sentinel->previous = blockchain->sentinel;

    printf("==Block %u==    %s%s%s (Accepts %d transactions)\n", blockchain->size, GREEN, "Created", RESET, blockchain->sentinel->nb_transactions);

    return blockchain;
}
/*-----------------------------------------------------------------*/

Blockchain* new_block(Blockchain* b){

    struct s_Block* nb = malloc(sizeof(struct s_Block));

    nb->index = ++(b->size);
    nb->timestamp = time(NULL);
    stpcpy((char*)nb->last_hash , (char*)b->sentinel->previous->current_hash);
    nb->nb_transactions = (BYTE)(rand()%(MAX_TRANSACTION)+1);
    stpcpy((char*)nb->merklel_root_hash, (char*)"merklel_root_hash");
    stpcpy((char*)nb->current_hash, (char*)"current_hash");
    nb->nonce = 0;

    nb->previous = b->sentinel->previous;
    nb->next = b->sentinel;
    nb->previous->next = nb;
    b->sentinel->previous = nb;

    printf("==Block %u==    %s%s%s (Accepts %d transactions)\n", b->size, GREEN, "Created", RESET, nb->nb_transactions);

    return b;
}

/*-----------------------------------------------------------------*/

Blockchain* set_block_transactions(Blockchain* b){

    for (int i = 0; i < (int)b->sentinel->previous->nb_transactions; ++i) {

        char transaction_details[TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH] = "Source-Destination :";
        unsigned int random_exchange_value = (unsigned int)(rand()%(MAX_VALUE));
        char buffer[TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH];
        snprintf(buffer, sizeof(buffer), "%s %d", transaction_details,  random_exchange_value);
        strcpy((char*)b->sentinel->previous->transaction_details[i], buffer);

        printf("==Block %d==    Random Transaction %2d: %s%s%s (%s)\n", b->sentinel->previous->index, i+1 ,GREEN, "Created", RESET, buffer);
    }
    return b;
}

/*-----------------------------------------------------------------*/


Blockchain* calculate_merkle_root(Blockchain* b){


    size_t nb_hash = b->sentinel->previous->nb_transactions;

    char** hashed_transaction = malloc(nb_hash * sizeof(char*));

    for (int i = 0; i < nb_hash; i++){
        hashed_transaction[i] = malloc((SHA256_BLOCK_SIZE*2 +1) * sizeof(BYTE));
        sha256ofString(b->sentinel->previous->transaction_details[i], hashed_transaction[i]);
    }

    while(nb_hash != 1) hash_hash(hashed_transaction, &nb_hash);

    strcpy((char*)b->sentinel->previous->merklel_root_hash, hashed_transaction[nb_hash-1]);

    for (int k = 0; k < b->sentinel->previous->nb_transactions; ++k) free(hashed_transaction[k]);
    free(hashed_transaction);

    printf("==Block %u==    Transaction Merkel Root: %s%s%s (%s)\n", b->size, GREEN, "Created", RESET, b->sentinel->previous->merklel_root_hash);

    return b;

}

/*-----------------------------------------------------------------*/

bool check_difficulty(char* hash, unsigned int difficulty){

    for (int i = 0; i < difficulty; ++i) {
        if(hash[i] != '0') return false;
    }
    return true;
}

/*-----------------------------------------------------------------*/

Blockchain* hash_block(Blockchain* b){

    BYTE buffer[165];
    char current_hash[(SHA256_BLOCK_SIZE*2 +1)];
    clock_t start, end;
    start = clock();

    sha256ofString(buffer, current_hash);

    while(!check_difficulty(current_hash, b->difficulty)){

        ++(b->sentinel->previous->nonce);

        snprintf((char*)buffer, sizeof(buffer), "%d%ld%s%s%d",
                 b->sentinel->previous->index,
                 b->sentinel->previous->timestamp,
                 b->sentinel->previous->last_hash,
                 b->sentinel->previous->merklel_root_hash,
                 b->sentinel->previous->nonce);

        sha256ofString(buffer, current_hash);
    }
    strcpy((char*)b->sentinel->previous->current_hash, current_hash);
    end = clock();
    double exec_time = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("==Block %u==    Block hash: %s%s%s in %fs (%s)\n", b->size, GREEN, "Created", RESET, exec_time, b->sentinel->previous->current_hash);

    //printf("\nNonce: %d\n", b->sentinel->previous->nonce);
    //printf("Current Hash: %s\n", b->sentinel->previous->current_hash);

    return b;
}

/*-----------------------------------------------------------------*/

void clear_blockchain(blockchainPtr* blockchain){

    Block* block = (*blockchain)->sentinel;
    Block* tmp;

    do {
        tmp = block->next;
        free(block);
        block = tmp;

    } while (block != (*blockchain)->sentinel);
    free(*blockchain);
    *blockchain = NULL;
}

/*-----------------------------------------------------------------*/

size_t block_count(Blockchain* blockchain){
    return blockchain->size;
}