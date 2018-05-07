#include "./utils/blockchain_utils.h"
#include "./gui/gui.h"

int main(int argc, const char* argv[]) {

    int number_of_block;
    int difficulty;
    int choice;
    int exit = 0;

    gui(&number_of_block, &difficulty);

    Blockchain* blockchain = create_random_blockchain(number_of_block, difficulty);



    while(true){

        printf("Enter: \n"
                       "1 - If you want to check the blockchain integrity \n"
                       "2 - If you want to delete a block\n"
                       "3 - If you want to change a transaction\n"
                       "4 - If you want to exit (all blockchain is lost)\n");

        printf("-->    ");
        scanf("%d", &choice);

        switch (choice){

            case 1:
                blockchain_integrity_check(blockchain);
                break;
            case 2:
                printf("maelle\n");
                break;
            case 3:
                printf("maelle\n");
                break;
            case 4:
                printf("%s%s%s", BLUE, "Blockchain erased !\nProgram closed\n", RESET);
                exit = 1;
                break;
        }

        if(exit) break;

    }

    clear_blockchain(&blockchain);




    return 0;
}
