
#include "../headers/messages.h"

void printDescriptionMessage(enum LabType messageType){
    switch (messageType) {
        case LAB2:{
            printf("\n\nTesting basic User and Product functionalities\n\n");
            break;
        }
        case LAB3:{
            printf("\n\nTesting User with modified BirthDate and UserArray functionalities\n\n");
            break;
        }
        default:{
            printf("\n\nUndefined description\n\n");
            break;
        }
    }
}

void kodFuttatasaElkezodott() {
    printf("A kod futtatasa elkezdodott!");
}

void kodFuttatasaBefejezodott() {
    printf("A kod futtatasa befejezodott!");
}

void printDeleteMessage(enum DeletionType messageType) {
    switch (messageType) {
        case USER_DELETED:{
            printf("\nUser deleted!\n");
            break;
        }
        case PRODUCT_DELETED:{
            printf("\nProduct deleted!\n");
            break;
        }
        case USER_ARRAY_DELETED:{
            printf("\nUser array deleted!\n");
            break;
        }
        case PRODUCT_ARRAY_DELETED:{
            printf("\nProduct array deleted!\n");
            break;
        }
        default:{
            printf("\nUndefined deletion\n");
        }
    }
}
