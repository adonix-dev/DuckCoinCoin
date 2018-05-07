
#include "blockchain_utils.h"

Blockchain* create_random_blockchain(int number_of_blocks, int difficulty){

    clock_t start, end;
    start = clock();

    Blockchain* b = blockchain(difficulty);

    set_block_transactions(b);
    calculate_merkle_root(b);
    hash_block(b);
    printf("\n");

    for (int i = 1; i < number_of_blocks; ++i) {
        new_block(b);
        set_block_transactions(b);
        calculate_merkle_root(b);
        hash_block(b);
        printf("\n");
    }

    end = clock();
    double exec_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%d Blocks hashed in: %f with a difficulty of %d\n", number_of_blocks, exec_time, difficulty);

    return b;

}

void blockchain_integrity_check(Blockchain* blockchain){

    if(integrity_check(blockchain)){
        printf("Blockchain is ok%s\n", RESET);
    }
    else{
        printf("Blockchain is corrupted%s", RESET);
    }
}

void delete_

