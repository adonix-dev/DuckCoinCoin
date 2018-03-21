//
// Created by Antony Laget on 02/02/2018.
//

#pragma once

#include <stdlib.h> //for malloc
#include <stdio.h>  //for snprintf et fprintf
#include <string.h> //for stpcpy
#include <assert.h> //for assert
#include "../c-lib/sha256/sha256_utils.h" //for BYTE type import
#include <time.h>
#include <unistd.h>

#define MAX_VALUE 1000      //max transaction amount
#define MAX_VALUE_LENGTH 4  //length of MAX_VALUE

typedef struct s_Transactions* Transactions; //Opaque struct transactions

Transactions transactions();                 //

//Transactions create_transactions(BYTE nb_transactions);

Transactions new_transaction(Transactions t);

BYTE* get_transaction_info(Transactions t, BYTE index);