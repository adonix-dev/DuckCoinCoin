//
// Created by Antony Laget on 02/02/2018.
//

#include "Transaction.h"

struct s_Transaction{

    BYTE details;

};

Transaction newTransaction(){

    return (Transaction)malloc(sizeof(Transaction));

}

void set_transaction_details(Transaction transaction, BYTE details) {

    transaction->details = details;

}

BYTE get_transaction_details(Transaction transaction){

    return transaction->details;

}