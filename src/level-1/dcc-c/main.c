#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "database/Transaction.h"
#include "database/Block.h"
#include "database/Blockchain.h"

/*

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

    Transaction* transaction;
    transaction->details = "from-to :1";

    block->transactions       = transaction;
    block->merklel_root_hash  = 0;
    block->current_hash       = 0;
    block->nonce              = 0;
    block->next_block         = NULL;

    blockchain->first_block = block;

}
*/
/*void add_block(Blockchain* blockchain, Block* block){

    

}*/


int main(int argc, const char* argv[]) {

    printf("Hello, World!\n");

    //int nb_transaction = 8;

    //Transactions transaction = create_transactions(8);

    srand((unsigned int)time(NULL));

    Transactions l_transactions = transactions();

    for (int i = 0; i < 5; ++i)
        l_transactions = new_transaction(l_transactions);

    for(int i = 0; i<5; ++i) {
        printf("%s\n", get_transaction_info(l_transactions, i));
    }

    Blocks l_blocks = blocks();

    for (int i = 0; i < 5; ++i)
        l_blocks = new_block(l_blocks);


    //for(int i = 0; i<5; ++i) {
       // printf("%d\n", get)

    printf("%s\n", get_block_info(l_blocks, 1));
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