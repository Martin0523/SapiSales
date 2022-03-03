
#include "../headers/messages.h"

void printDescriptionMessage(enum LabType messageType){
    switch (messageType) {
        case LAB2:{
            printf("\n\nTesting basic User and Product functionalities\n\n");
            break;
        }
        case LAB3:{
            printf("\n\nTesting User iwht modified BrithDate and UserArray functionalities\n\n");
            break;
        }
        default:{
            printf("\n\nUndefined description\n\n");
            break;
        }
    }
}
