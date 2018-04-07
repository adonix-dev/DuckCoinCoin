
#include "Transaction.h"

#define TRANSACTION_STR_LENGTH 22

typedef struct s_Transaction{

    BYTE details[TRANSACTION_STR_LENGTH + MAX_VALUE_LENGTH]; //"Source-Destination : RAND_VALUE"
    struct s_Transaction* next;

} Transaction;

struct s_Transactions{

    Transaction* sentinel;
    size_t size;

};

Transactions* transactions(){
    Transactions* transactions = malloc(sizeof(struct s_Transactions));
    transactions->sentinel = malloc(sizeof(struct s_Transaction));
    transactions->size = 0;
    transactions->sentinel->next = NULL;
    return transactions;
}

void clear_transactions(transacPtr* transactions){

	if (transactions_count(*transactions) > 1)
	{
		Transaction* transaction = (*transactions)->sentinel;
		Transaction* tmp;

		do
		{
			tmp = transaction->next;
			free(transaction->next);
			transaction = tmp;

		} while (transaction != NULL);
	}
	else free((*transactions)->sentinel->next);
	*transactions = NULL;
}

size_t transactions_count(Transactions* transactions){
	return transactions->size;
}