#include <stdio.h>
#include "database/Transaction.h"
#include "database/Blockchain.h"

#define MAX_T 10        //nb max de transaction par block
#define DIFFICULTY 2    //difficulte hashage blockchain

int main() {

    printf("1_DCC_C\n");

    Transactions* t = create_transaction(3);

    (void)t;

    Blockchain* b = blockchain(MAX_T, DIFFICULTY);

    clear_blockchain(&b);

    return 0;
}
