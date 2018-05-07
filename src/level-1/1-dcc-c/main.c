#include "./utils/blockchain_utils.h"
#include "./gui/gui.h"

int main(int argc, const char* argv[]) {

    if(argc<2) error(404, RED, "Please precise number of block");

    int number_of_block = atoi(argv[1]);
    int difficulty = atoi(argv[2]);

    //gui(&number_of_block, &difficulty);

    //printf("%d %d\n", number_of_block, difficulty);

    create_random_blockchain(number_of_block, difficulty);

    return 0;
}
