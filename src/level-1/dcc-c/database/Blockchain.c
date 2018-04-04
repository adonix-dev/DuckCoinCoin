//
// Created by Antony Laget on 02/02/2018.
//

#include "Blockchain.h"

struct s_Blockchain{

    Blocks first_block;

    BYTE difficulty;

    size_t chain_size;

};

Blockchain blockchain(BYTE difficulty){
    Blockchain b = malloc(sizeof(struct s_Blockchain));
    b->first_block = blocks();
    b->chain_size = 1;
    return b;
}

BYTE get_difficulty(Blockchain blockchain){
    return blockchain->difficulty;
}

/*
 * Choisir le nombre de block crée
 * La difficulté
 * Le nombre max de transaction par block
 */