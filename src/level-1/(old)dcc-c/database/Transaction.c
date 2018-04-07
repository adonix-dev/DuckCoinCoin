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

Transactions new_transaction(Transactions t){

    Transaction *new = malloc(sizeof(Transaction));
    Transaction *tmp;

    BYTE transaction_details[STR_LENGTH + MAX_VALUE_LENGTH] = "Source-Destination :";
    unsigned int random_exchange_value = (unsigned int)(rand()%(MAX_VALUE));
    BYTE buffer[STR_LENGTH + MAX_VALUE_LENGTH];
    snprintf((char*)buffer, sizeof(buffer), "%s %d", transaction_details,  random_exchange_value);

    stpcpy((char*)new->details, (char*)buffer);

    new->next = NULL;

    if(t->tail == NULL) t->tail = new;
    else tmp->next = new;

    tmp = new;
    ++(t->size);
    
    return t;
}

void get_easy_transaction_table(Transactions t, Transaction* easy_transaction_table){
    /* TO INIT BEFORE GET
    Transaction easy_transaction_table[t->size];

    get_easy_transaction_table(t, easy_transaction_table);
     */
    Transaction *tmp = t->tail;

    for (int i = 0; i < t->size; ++i) {
        easy_transaction_table[i] = *tmp;
        tmp = tmp->next;
    }
    /* FOR PRINTING THIS LIST
    for (int j = 0; j < t->size; ++j) {
        printf("%s\n", easy_transaction_table[j].details);
    }
     */
}


BYTE* get_transaction_info(Transactions t, BYTE index){

    assert(index <= t->size);
    assert(t->tail != NULL);
    
    if(index <= t->size){
        Transaction *tmp = t->tail;
        for(int i = 0; i < index; ++i) tmp = tmp->next;
        return tmp->details;
    }
    else{
        fprintf(stderr, "transaction: Trying to access to a none allocated area");
        return (BYTE*)"transaction: error";
    }
}



