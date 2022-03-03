
#ifndef SAPISALES_ERRORS_H
#define SAPISALES_ERRORS_H

#include "stdlib.h"
#include "stdio.h"

enum ErrorType {
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION,
};

void printErrorMessage(enum ErrorType errorType);

#endif //SAPISALES_ERRORS_H
