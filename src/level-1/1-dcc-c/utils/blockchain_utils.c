
#include "blockchain_utils.h"

void create_random_blockchain(int number_of_blocks, int difficulty){

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

    if(integrity_check(b)){
        printf("Blockchain is ok\n");
    }

    end = clock();
    double exec_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%d Blocks hashed in: %f with a difficulty of %d\n", number_of_blocks, exec_time, difficulty);

    clear_blockchain(&b);
}
