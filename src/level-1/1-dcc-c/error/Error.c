
#include <string.h>
#include "Error.h"
#include "../Config.h"

void error(int code, char* color, char* message){

    BYTE* buffer[MESSAGE_MAX_SIZE];

    snprintf((char*)buffer, MESSAGE_MAX_SIZE, "%s%s%s", color, message, RESET);

    fprintf(stdout, "%s\n", (char*)buffer);

    exit(code);
}