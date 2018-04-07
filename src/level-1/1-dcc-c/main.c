#include <stdio.h>
#include "database/Transaction.h"
#include "database/Blockchain.h"

int main() {

    printf("1_DCC_C\n");
    srand((unsigned int)time(NULL));

    Transactions* transacs = transactions();

    clear_transactions(&transacs);

    return 0;
}
