
#ifndef SAPISALES_MESSAGES_H
#define SAPISALES_MESSAGES_H

#include "stdlib.h"
#include "stdio.h"

enum LabType{
    LAB2,
    LAB3,
    LAB5,
    LAB8,
};

enum DeletionType{
    USER_DELETED,
    PRODUCT_DELETED,
    USER_ARRAY_DELETED,
    PRODUCT_ARRAY_DELETED,
    PRODUCT_STACK_DELETED,
    USER_QUEUE_DELETED,
};

void printDescriptionMessage(enum LabType messageType);
void kodFuttatasaElkezodott();
void kodFuttatasaBefejezodott();
void printDeleteMessage(enum DeletionType messageType);

#endif //SAPISALES_MESSAGES_H
