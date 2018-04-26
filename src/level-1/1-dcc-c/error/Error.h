
#pragma once

#include <stdio.h>  //for snprintf et fprintf
#include <stdlib.h> //for exit
#include "../c-lib/sha256/sha256_utils.h"

#define MESSAGE_MAX_SIZE 100

void error(int code, char* color, char* message);