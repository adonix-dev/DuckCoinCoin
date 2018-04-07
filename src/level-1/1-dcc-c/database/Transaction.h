
#pragma once

#include <stdlib.h> //for malloc
#include <stdio.h>  //for snprintf et fprintf
#include <string.h> //for stpcpy
#include <assert.h> //for assert
#include <time.h>	//for rand
#include "../c-lib/sha256/sha256_utils.h" //for BYTE type import

#define MAX_VALUE 1000      //max transaction amount
#define MAX_VALUE_LENGTH 4  //length of MAX_VALUE

typedef struct s_Transactions Transactions; //Opaque struct transactions

typedef Transactions* transacPtr;

Transactions* transactions();                 //Creation d'une chaine de transaction

Transactions* new_transaction(Transactions t);   //Ajout d'un transaction à la chaine

BYTE* get_transaction_info(Transactions t, BYTE index); //Retourne les details de la transaction

void clear_transactions(transacPtr* transactions);

size_t transactions_count(Transactions* transactions);
