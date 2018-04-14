#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "database/Transaction.h"
#include "database/Block.h"
#include "database/Blockchain.h"


int main(int argc, const char* argv[]) {

    printf("Hello, World!\n");
    srand((unsigned int)time(NULL));

    int nb_block = 10;
    int nb_transaction_max_block = 10;

    //int nb_transaction = 8;

    //Transactions transaction = create_transactions(8);
    Blocks l_blocks = blocks();

    for (int i = 0; i < nb_block; ++i)
    {   
        printf("%d\n", 8);
        l_blocks = new_block(l_blocks);
        printf("7\n");
        //add_transactions(l_blocks, i, nb_transaction_max_block);
    }

/*
    Transactions l_transactions = transactions();

    for (int i = 0; i < 5; ++i)
        l_transactions = new_transaction(l_transactions);

    for(int i = 0; i<5; ++i) {
        printf("%s\n", get_transaction_info(l_transactions, i));
    }
*/

    //for(int i = 0; i<5; ++i) {
       // printf("%d\n", get)

    //printf("%s\n", get_block_info(l_blocks, 1));

    //}


    //BYTE* str = get_transaction_info(transactions, 3);
    //char hashRes[SHA256_BLOCK_SIZE*2 + 1];

    //printf("---%s\n", str);
    /*
    for(int i = 0; i<100000000; ++i){

        BYTE transaction_details[20] = "a";
        BYTE buffer[20];
        snprintf(buffer, sizeof(buffer), "%s %d", transaction_details, i);

        sha256ofString(buffer, hashRes);
        if(hashRes[0] == '0' && hashRes[1] == '0' && hashRes[2] == '0' && hashRes[3] == '0' && hashRes[4] == '0'){
            printf("---%s\n", hashRes);
        }
    }*/
    //sha256ofString(str, hashRes);



    //Block* block_index = (Block*)malloc(100*sizeof(Block*));

    //Blockchain* blockchain = NULL;

    //if ((blockchain = (Blockchain*)malloc(sizeof(Blockchain*))) == NULL) {
        //fprintf(stderr, "%s\n", "Blockchain: unable to allocate memory");
        //exit(-1);
    //}

    //blockchain__init(blockchain, block_index);

    //printf("%d", blockchain->first_block->index);

    //printf("%d",block_index[0].index);











    return 0;
}