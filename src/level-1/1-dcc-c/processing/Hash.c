
#include "Hash.h"

void concat_hash_two_string(BYTE* a, BYTE* b, BYTE* output_buffer){

    BYTE buffer[sizeof(a) + sizeof(b)];
    snprintf((char*)buffer, sizeof(buffer), "%s%s", a,  b);
    sha256ofString(buffer, (char*)output_buffer);
}

void hash_hash(BYTE** hash, size_t* nb_hash){
    assert(*nb_hash>1);  //hash contient plus de 1 hash

    int i;
    size_t new_size = 0;

    if(*nb_hash%2){
        for (i = 0; i < (*nb_hash)-1; i+=2) {
            concat_hash_two_string(hash[i], hash[i+1], hash[new_size]);
            ++new_size;
        }
        concat_hash_two_string(hash[*nb_hash-1], hash[*nb_hash-1], hash[new_size]);
        ++new_size;
    }
    else{
        for (i = 0; i < (*nb_hash); i+=2) {
            concat_hash_two_string(hash[i], hash[i+1], hash[new_size]);
            ++new_size;
        }
    }
    *nb_hash = new_size;
}