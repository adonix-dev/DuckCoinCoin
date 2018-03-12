//
// Created by Antony Laget on 02/02/2018.
//


#include "Transaction.h"
#define STR_LENGTH 22

typedef struct s_Transaction{

    BYTE details[STR_LENGTH + MAX_VALUE_LENGTH]; //"Source-Destination : RAND_VALUE"
    struct s_Transaction *next;

} Transaction;

struct s_Transactions{

    Transaction* first;
    size_t size;

};

Transactions transactions(){
    Transactions transactions = (Transactions)malloc(sizeof(struct s_Transactions));
    transactions->first = NULL;
    transactions->size = 0;
    return transactions;
}

Transactions new(Transactions t){

    Transaction *new = malloc(sizeof(Transaction));
    Transaction *tmp;

    BYTE transaction_details[STR_LENGTH + MAX_VALUE_LENGTH] = "Source-Destination :";
    unsigned int random_exchage_value = (unsigned int)(rand()%(MAX_VALUE));
    BYTE buffer[STR_LENGTH + MAX_VALUE_LENGTH];
    snprintf(buffer, sizeof(buffer), "%s %d", transaction_details,  random_exchage_value);

    stpcpy(new->details, buffer);

    new->next = NULL;

    if(t->first == NULL){
        t->first = new;
        tmp = new;
    }
    else{
        tmp->next = new;
        tmp = new;
    }

    ++(t->size);

    return t;
}

BYTE* get_transaction_info(Transactions t, BYTE index){

    printf("%d\n", (int)t->size);

    Transaction *tmp = t->first;

    for(int i = 0; i < index; ++i){

        printf("%s\n", tmp->details);
        tmp = tmp->next;

    }

}
