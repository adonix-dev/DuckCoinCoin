//
// Created by Antony Laget on 02/02/2018.
//

#include "Blockchain.h"

struct s_Blockchain{

    Blocks* first_block;

    unsigned char difficulty;

    size_t chain_size;

};

Blockchain blockchain(unsigned char difficulty){
    Blockchain b = malloc(sizeof(struct s_Blockchain));
    b->chain_size = 1;
    return b;
}

unsigned char get_difficulty(Blockchain blockchain){
    return blockchain->difficulty;
}
