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
    srand((unsigned int)time(NULL));

    Transactions transactions = create_transactions(8);

    printf("%s", get_transaction_info(transactions, 6));



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