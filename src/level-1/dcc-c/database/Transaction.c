//
// Created by Antony Laget on 02/02/2018.
//


#include "Transaction.h"

struct s_Transactions{

    BYTE details[22 + sizeof(MAX_VALUE)]; //"Source-Destination : RAND_VALUE"
    Transactions next_transaction;

};

Transactions set_next_transaction(Transactions transactions){

    Transactions new_transactions = malloc(sizeof(struct s_Transactions));
    new_transactions->next_transaction  = NULL;

    transactions->next_transaction = new_transactions;

}

void set_transaction_details(Transactions transactions) {

    BYTE transaction_details[22 + sizeof(MAX_VALUE)] = "Source-Destination :";

    srand((unsigned int)time(NULL));
    unsigned int random_exchage_value = (unsigned int)(rand()%(MAX_VALUE));

    BYTE buffer[22 + sizeof(MAX_VALUE)];
    snprintf(buffer, sizeof(buffer), "%s %d\0", transaction_details,  random_exchage_value);

    strcpy(transactions->details, buffer);

}

BYTE* get_transaction_details(Transactions transactions){

    return transactions->details;

}