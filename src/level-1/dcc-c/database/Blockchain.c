//
// Created by Antony Laget on 02/02/2018.
//

#include "Blockchain.h"

struct s_Blockchain{

    Block* first_block;

    unsigned char difficulty;

    size_t chain_size;

};

Blockchain __construct(Blockchain blockchain, unsigned char difficulty){

    //initaliser les attributs
    blockchain->chain_size = 1;
    return blockchain;

}

unsigned char get_difficulty(Blockchain blockchain){
    return blockchain->difficulty;
}
