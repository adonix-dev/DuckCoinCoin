
#include "Blockchain.h"

typedef struct s_Block{

    BYTE            index;
    time_t          timestamp;
    BYTE            last_hash[32];
    BYTE            nb_transactions;
    Transactions*   transactions;
    BYTE            merklel_root_hash[32];
    BYTE            current_hash[32];
    BYTE            nonce;
    struct s_Block* next_block;

} Block;

struct s_blockchain{
    Block* tail;
    size_t size;
};