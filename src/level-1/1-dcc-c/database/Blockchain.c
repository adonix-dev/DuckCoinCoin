
#include "Blockchain.h"

#define TRANSACTION_STR_LENGTH 20 //"Source-Destination"

typedef struct s_Block{

    WORD    index;
    time_t  timestamp;
    BYTE    last_hash[SHA256_BLOCK_SIZE*2+1];
    BYTE    nb_transactions;
    BYTE    transaction_details[MAX_TRANSACTION][TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH]; //"Source-Destination : RAND_VALUE"
    BYTE    merklel_root_hash[SHA256_BLOCK_SIZE*2+1];
    BYTE    current_hash[SHA256_BLOCK_SIZE*2+1];
    WORD    nonce;
    struct s_Block* next;
    struct s_Block* previous;

} Block;

struct s_blockchain{

    Block* sentinel;
    WORD difficulty;
    WORD size;
};

/*-----------------------------------------------------------------*/

Blockchain* blockchain(WORD difficulty){



    srand((WORD)time(NULL));

    Blockchain* blockchain = malloc(sizeof(struct s_blockchain));
    blockchain->sentinel = malloc(sizeof(struct s_Block));
    blockchain->difficulty = difficulty;
    blockchain->size = 1;

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

    nb->index = (b->size)++;
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
        WORD random_exchange_value = (WORD)(rand()%(MAX_VALUE));
        char buffer[TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH];
        snprintf(buffer, sizeof(buffer), "%s %d", transaction_details,  random_exchange_value);
        strcpy((char*)b->sentinel->previous->transaction_details[i], buffer);

        printf("==Block %d==    Random Transaction %2d: %s%s%s (%s)\n", b->sentinel->previous->index+1, i+1 ,GREEN, "Created", RESET, buffer);
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

    printf("==Block %u==    Transaction Merkel Root: %s%s%s (%s%s%s)\n", b->size, GREEN, "Created", RESET, MAGENTA, b->sentinel->previous->merklel_root_hash, RESET);

    return b;

}

/*-----------------------------------------------------------------*/

bool check_difficulty(const char* hash, WORD difficulty){

    for (int i = 0; i < difficulty; ++i) {
        if(hash[i] != '0') return false;
    }
    return true;
}

/*-----------------------------------------------------------------*/

Blockchain* hash_block(Blockchain* b){

    /*
     *                     hashes time index
     * buffer size > nonce + 64*2 + 10 + 1  =  n + 139
     * Let's consider a max nonce length of 11 digits
     */
    BYTE buffer[150];
    char current_hash[(SHA256_BLOCK_SIZE*2 +1)];
    clock_t start, end;
    start = clock();


    snprintf((char*)buffer, sizeof(buffer), "%d%ld%s%s%d",
             b->sentinel->previous->index,
             b->sentinel->previous->timestamp,
             b->sentinel->previous->last_hash,
             b->sentinel->previous->merklel_root_hash,
             b->sentinel->previous->nonce);

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

    printf("==Block %u==    Block hash: %s%s%s in %fs (%s%s%s) and nonce is %d\n", b->size, GREEN, "Created", RESET, exec_time, MAGENTA, b->sentinel->previous->current_hash, RESET, b->sentinel->previous->nonce);

    return b;
}

/*-----------------------------------------------------------------*/

bool check_merkel_tree(Block* block){

    size_t nb_hash = block->nb_transactions;

    char** hashed_transaction = malloc(nb_hash * sizeof(char*));

    for (int i = 0; i < nb_hash; i++){
        hashed_transaction[i] = malloc((SHA256_BLOCK_SIZE*2 +1) * sizeof(BYTE));
        sha256ofString(block->transaction_details[i], hashed_transaction[i]);
    }

    while(nb_hash != 1) hash_hash(hashed_transaction, &nb_hash);

    BYTE merklel_tmp[SHA256_BLOCK_SIZE*2+1];
    strcpy((char*)merklel_tmp, hashed_transaction[nb_hash-1]);

    for (int k = 0; k < block->nb_transactions; ++k) free(hashed_transaction[k]);
    free(hashed_transaction);

    if(!strcmp((char*)block->merklel_root_hash, (char*)merklel_tmp)) return true;

    return false;
}

/*-----------------------------------------------------------------*/

bool block_hash_check(Block* block){

    BYTE buffer[150];
    char current_hash[(SHA256_BLOCK_SIZE*2 +1)];

    snprintf((char*)buffer, sizeof(buffer), "%d%ld%s%s%d",
             block->index,
             block->timestamp,
             block->last_hash,
             block->merklel_root_hash,
             block->nonce);

    sha256ofString(buffer, current_hash);

    if(!strcmp((char*)current_hash, (char*)block->current_hash)) return true;
    return  false;
}

/*-----------------------------------------------------------------*/

bool hash_continuity(Blockchain* blockchain){

    Block* current = blockchain->sentinel->next;

    bool continuity = true;

    for (WORD i = 1; i < blockchain->size; ++i) {

        if(strcmp((char*)current->previous->current_hash, (char*)current->last_hash)){
            continuity = false;
            break;
        }

        current = current->next;
    }

    return continuity;
}

/*-----------------------------------------------------------------*/

bool integrity_check(Blockchain* blockchain){

    Block* current = blockchain->sentinel->next;

    bool merkel_tree = false;
    bool hash = false;
    int continuity = 0;

    for (WORD i = 0; i < blockchain->size; ++i) {
        if((merkel_tree = check_merkel_tree(current->previous)) == true){
            printf("==Block %u Integrity==    Merkel Tree is: %s%s%s\n", i, GREEN, "Ok", RESET);
            if((hash = block_hash_check(current->previous)) == true) printf("==Block %u Integrity==    Hash is: %s%s%s\n", i, GREEN, "Ok", RESET);
            else{
                printf("==Block %u Integrity==    ", i);
                error(40, MAGENTA, "Hash is corrupted");
            }
        }
        else{
            printf("==Block %u Integrity==    ", i);
            error(40, MAGENTA, "Merkel Tree is corrupted");
        }
        if((continuity = strcmp((char*)current->previous->current_hash, (char*)current->previous->last_hash)) == 0){
            printf("==Global  Integrity==    ");
            error(40, MAGENTA, "Hash is corrupted");
        }
        current = current->next;
    }

    if(merkel_tree && hash && continuity){
        printf("%s==BChain  Integrity ==    ", CYAN);
        return true;
    }
    return false;

}


void delete_block_at(Blockchain* blockchain, int block_index){

    Block* current = blockchain->sentinel;


    for(int i = 0; i < block_index; ++i) current = current->next;

    current->previous->next = current->next;
    current->next->previous = current->previous;
    strcpy((char*)current->next->last_hash, (char*)current->previous->current_hash);

    Block* current_tmp = current;

    current = current->next;

    free(current_tmp);

    --(blockchain->size);

    for (int i = block_index; i < blockchain->size; ++i) {

        --(current->index);
        current->nonce = 0;

        BYTE buffer[150];
        char current_hash[(SHA256_BLOCK_SIZE*2 +1)];


        snprintf((char*)buffer, sizeof(buffer), "%d%ld%s%s%d",
                 current->index,
                 current->timestamp,
                 current->last_hash,
                 current->merklel_root_hash,
                 current->nonce);

        sha256ofString(buffer, current_hash);

        while(!check_difficulty(current_hash, blockchain->difficulty)){

            ++(current->nonce);

            snprintf((char*)buffer, sizeof(buffer), "%d%ld%s%s%d",
                     current->index,
                     current->timestamp,
                     current->last_hash,
                     current->merklel_root_hash,
                     current->nonce);

            sha256ofString(buffer, current_hash);
        }
        strcpy((char*)current->current_hash, current_hash);

        printf("==Block %u==    Block hash: %s%s%s (%s%s%s) and nonce is %d\n", current->index, GREEN, "Created", RESET, MAGENTA, current->current_hash, RESET, current->nonce);


        current = current->next;
    }



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

unsigned int block_count(Blockchain* blockchain){
    return blockchain->size;
}