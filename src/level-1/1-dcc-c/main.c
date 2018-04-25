#include <stdio.h>
#include "database/Blockchain.h"

#define MAX_T 10        //nb max de transaction par block
#define DIFFICULTY 2    //difficulte hashage blockchain

int main() {

    printf("1_DCC_C\n");


    Blockchain* b = blockchain(MAX_T, DIFFICULTY);

    set_block_transactions(b);
    calculate_merkle_root(b);
    printf("\n");

    for (int i = 0; i < 10; ++i) {
        new_block(b, MAX_T);
        set_block_transactions(b);
        calculate_merkle_root(b);
        printf("\n");
    }

    clear_blockchain(&b);

    return 0;
}
