
#include "Transaction.h"

#define TRANSACTION_STR_LENGTH 20

typedef struct s_Transaction{

    BYTE details[TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH]; //"Source-Destination : RAND_VALUE"
    struct s_Transaction* next;
    struct s_Transaction* previous;

} Transaction;

struct s_Transactions{

    Transaction* sentinel;
    size_t size;

};

/*-----------------------------------------------------------------*/

Transactions* transactions(){
    Transactions* transactions = malloc(sizeof(struct s_Transactions));
    transactions->sentinel = malloc(sizeof(struct s_Transaction));
    transactions->size = 0;
    transactions->sentinel->next = transactions->sentinel;
    transactions->sentinel->previous = transactions->sentinel;
    return transactions;
}

/*-----------------------------------------------------------------*/

Transactions* new_transaction(Transactions* t){

    struct s_Transaction* nt = malloc(sizeof(struct s_Transaction));

    BYTE transaction_details[TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH] = "Source-Destination :";
    unsigned int random_exchange_value = (unsigned int)(rand()%(MAX_VALUE));
    BYTE buffer[TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH];
    snprintf((char*)buffer, sizeof(buffer), "%s %d", transaction_details,  random_exchange_value);

    if(t->size){
        stpcpy((char*)nt->details, (char*)buffer);
        nt->previous = t->sentinel->previous;
        nt->next = t->sentinel;
        nt->previous->next = nt;
        t->sentinel->previous = nt;
    }
    else stpcpy((char*)t->sentinel->details, (char*)buffer);

    ++(t->size);

    return t;
}

/*-----------------------------------------------------------------*/

void clear_transactions(transacPtr* transactions){

    Transaction* transaction = (*transactions)->sentinel;
    Transaction* tmp;

    do {
        tmp = transaction->next;
        free(transaction);
        transaction = tmp;

    } while (transaction != (*transactions)->sentinel);
    //free((*transactions)->sentinel);
    free((*transactions));
    *transactions = NULL;
}

/*-----------------------------------------------------------------*/

size_t transactions_count(Transactions* transactions){
    return transactions->size;
}

/*-----------------------------------------------------------------*/

Transactions* create_transaction(int nb_transaction){

    Transactions* t = transactions();

    while (--nb_transaction+1) new_transaction(t);

    return t;
}