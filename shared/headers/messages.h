
#ifndef SAPISALES_MESSAGES_H
#define SAPISALES_MESSAGES_H

#include "stdlib.h"
#include "stdio.h"

enum LabType{
    LAB2,
    LAB3,
};

enum DeletionType{
    USER_DELETED,
    PRODUCT_DELETED,
    USER_ARRAY_DELETED,
    PRODUCT_ARRAY_DELETED,
};

void printDescriptionMessage(enum LabType messageType);
void kodFuttatasaElkezodott();
void kodFuttatasaBefejezodott();
void printDeleteMessage(enum DeletionType messageType);

#endif //SAPISALES_MESSAGES_H
