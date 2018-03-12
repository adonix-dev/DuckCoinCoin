//
// Created by Antony Laget on 02/02/2018.
//

#pragma once

#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include "../c-lib/sha256/sha256_utils.h"

#define MAX_VALUE 100000
#define MAX_VALUE_LENGTH 6

typedef struct s_Transactions* Transactions;

Transactions transactions();

Transactions new(Transactions t);

BYTE* get_transaction_info(Transactions t, BYTE index);