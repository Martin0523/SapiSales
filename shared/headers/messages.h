
#ifndef SAPISALES_MESSAGES_H
#define SAPISALES_MESSAGES_H

#include "stdlib.h"
#include "stdio.h"

enum LabType{
    LAB2,
    LAB3,
};

void printDescriptionMessage(enum LabType messageType);

#endif //SAPISALES_MESSAGES_H
