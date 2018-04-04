//
// Created by Antony Laget on 02/02/2018.
//


#include "Transaction.h"
#define STR_LENGTH 22

typedef struct s_Transaction{

    BYTE details[STR_LENGTH + MAX_VALUE_LENGTH]; //"Source-Destination : RAND_VALUE"
    struct s_Transaction* next;

} Transaction;

struct s_Transactions{

    Transaction* tail;
    size_t size;

};

Transactions transactions(){
    Transactions transactions = (Transactions)malloc(sizeof(struct s_Transactions));
    transactions->tail = NULL;
    transactions->size = 0;
    return transactions;
}
/*
Transactions create_transactions(BYTE nb_transactions){

    srand((unsigned int)time(NULL));
    Transactions l_transaction = transactions();
    for (int i = 0; i < nb_transactions; ++i) l_transaction = new_transaction(l_transaction);
    return l_transaction;
}
*/
Transactions new_transaction(Transactions t){


    Transaction *new = malloc(sizeof(Transaction));
    Transaction *tmp;

    BYTE transaction_details[STR_LENGTH + MAX_VALUE_LENGTH] = "Source-Destination :";
    unsigned int random_exchange_value = (unsigned int)(rand()%(MAX_VALUE));
    BYTE buffer[STR_LENGTH + MAX_VALUE_LENGTH];
    snprintf(buffer, sizeof(buffer), "%s %d", transaction_details,  random_exchange_value);

    stpcpy(new->details, buffer);

    new->next = NULL;

    if(t->tail == NULL) t->tail = new;
    else tmp->next = new;

    tmp = new;
    ++(t->size);

    return t;
}

BYTE* get_transaction_info(Transactions t, BYTE index){

    assert(index <= t->size);
    assert(t->tail != NULL);

    if(index <= t->size){

        Transaction *tmp = t->tail;
        for(int i = 0; i < index; ++i) tmp = tmp->next;
        return tmp->details;
    }
    else fprintf(stderr, "transaction: Trying to access to a none allocated area");

}

BYTE* hash_two_string(BYTE* A, BYTE* B){

    BYTE output[SHA256_BLOCK_SIZE];
    snprintf(output, SHA256_BLOCK_SIZE, "%s %%", A, B);
    return output;

}

Transaction get_easy_transaction_table(Transactions t){

    Transaction easy_transaction_table[t->size];
    Transaction *tmp = t->tail;

    for (int i = 0; i < t->size; ++i) {
        easy_transaction_table[i] = *tmp;
        tmp = tmp->next;
    }

    for (int j = 0; j < t->size; ++j) {
        printf("%s\n", easy_transaction_table[j].details);
    }

    return *easy_transaction_table;
}

