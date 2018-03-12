//
// Created by Antony Laget on 02/02/2018.
//

#pragma once

#include "../c-lib/sha256/sha256_utils.h"
#include "Block.h"

typedef struct s_Blockchain *Blockchain;

Blockchain __construct(Blockchain blockchain, unsigned char difficulty);

unsigned char  get_difficulty(Blockchain blockchain);