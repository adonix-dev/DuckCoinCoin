#include <stdio.h>
#include "Config.h"
#include "error/Error.h"
#include "database/Blockchain.h"

int main(int argc, const char* argv[]) {

    clock_t start, end;
    start = clock();

    Blockchain* b = blockchain(DIFFICULTY);

    set_block_transactions(b);
    calculate_merkle_root(b);
    hash_block(b);
    printf("\n");

    for (int i = 0; i < atoi(argv[1])-1; ++i) {
        new_block(b);
        set_block_transactions(b);
        calculate_merkle_root(b);
        hash_block(b);
        printf("\n");
    }

    clear_blockchain(&b);

    end = clock();
    double exec_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%d Blocks hashed in: %f with a difficulty of %d\n", atoi(argv[1]), exec_time, DIFFICULTY);

    return 0;
}
