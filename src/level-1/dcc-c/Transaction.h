//
// Created by Antony Laget on 02/02/2018.
//

#pragma once

#include <stdbool.h>
#include <stdlib.h>
#include "./c-lib/sha256/sha256_utils.h"

typedef struct s_Transaction* Transaction;

Transaction newTransaction();

void set_transaction_details(Transaction transaction, BYTE details);

BYTE get_transaction_details(Transaction transaction);
