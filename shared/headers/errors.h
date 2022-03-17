
#ifndef SAPISALES_ERRORS_H
#define SAPISALES_ERRORS_H

#include "stdlib.h"
#include "stdio.h"

enum ErrorType {
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION,
    USER_DOES_NOT_EXIST,
    PRODUCT_DOES_NOT_EXIST,
    USER_ARRAY_FULL,
    USER_ARRAY_DOES_NOT_EXIST,
    PRODUCT_ARRAY_FULL,
    PRODUCT_STACK_FULL,
    PRODUCT_STACK_EMPTY,
};

void printErrorMessage(enum ErrorType errorType);

#endif //SAPISALES_ERRORS_H
