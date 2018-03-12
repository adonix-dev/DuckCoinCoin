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

#define MAX_VALUE 1000

typedef struct s_Transactions* Transactions;

Transactions new_transaction();

void set_transaction_details(Transactions transaction);

BYTE* get_transaction_details(Transactions transaction);
