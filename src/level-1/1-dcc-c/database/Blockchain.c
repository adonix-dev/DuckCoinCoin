
#include "Blockchain.h"

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

#define TRANSACTION_STR_LENGTH 20 //"Source-Destination"

typedef struct s_Block{

    BYTE            index;
    time_t          timestamp;
    BYTE            last_hash[32];
    BYTE            nb_transactions;
    BYTE            transaction_details[10 * (TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH)]; //"Source-Destination : RAND_VALUE"
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

    srand((unsigned int)time(NULL));

    Blockchain* blockchain = malloc(sizeof(struct s_blockchain));
    blockchain->sentinel = malloc(sizeof(struct s_Block));
    blockchain->difficulty = difficulty;
    blockchain->size = 0;

    blockchain->sentinel->index = 0;
    blockchain->sentinel->timestamp = time(NULL);
    stpcpy((char*)blockchain->sentinel->last_hash, (char*)"GENESIS");
    blockchain->sentinel->nb_transactions = (BYTE)(rand()%(max_transaction)+1);
    stpcpy((char*)blockchain->sentinel->merklel_root_hash, (char*)"merklel_root_hash");
    stpcpy((char*)blockchain->sentinel->current_hash, (char*)"current_hash");
    blockchain->sentinel->nonce = (unsigned int)(rand()%(difficulty)+1);

    blockchain->sentinel->next = blockchain->sentinel;
    blockchain->sentinel->previous = blockchain->sentinel;

    printf("==Block %zu==    %s%s%s\n", blockchain->size, GREEN, "Created", RESET);

    return blockchain;
}
/*-----------------------------------------------------------------*/

Blockchain* new_block(Blockchain* b, int max_transaction){

    struct s_Block* nb = malloc(sizeof(struct s_Block));

    nb->index = (BYTE)(b->size + 1);
    nb->timestamp = time(NULL);
    stpcpy((char*)nb->last_hash , (char*)b->sentinel->previous->current_hash);
    nb->nb_transactions = (BYTE)(rand()%(max_transaction)+1);
    //nb->transactions =
    stpcpy((char*)nb->merklel_root_hash, (char*)"merklel_root_hash");
    stpcpy((char*)nb->current_hash, (char*)"current_hash");
    nb->nonce = (unsigned int)(rand()%(b->difficulty)+1);

    nb->previous = b->sentinel->previous;
    nb->next = b->sentinel;
    nb->previous->next = nb;
    b->sentinel->previous = nb;

    ++(b->size);

    printf("==Block %zu==    %s%s%s\n", b->size, GREEN, "Created", RESET);

    return b;
}

/*-----------------------------------------------------------------*/

Blockchain* set_block_transactions(Blockchain* b){

    for (int i = 0; i < (int)b->sentinel->previous->nb_transactions; ++i) {

        BYTE transaction_details[TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH] = "Source-Destination :";
        unsigned int random_exchange_value = (unsigned int)(rand()%(MAX_VALUE));
        BYTE buffer[TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH];
        snprintf((char*)buffer, sizeof(buffer), "%s %d", transaction_details,  random_exchange_value);

        for (int j = 0; j < sizeof(buffer); ++j)
            b->sentinel->previous->transaction_details[((TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH)*i)+j] = buffer[j];

        printf("==Block %d==    Random Transaction %d: %s%s%s (%s)\n", b->sentinel->previous->index, i ,GREEN, "Created", RESET, buffer);
    }
    printf("\n");
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