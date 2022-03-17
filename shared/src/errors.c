
#include "../headers/errors.h"

void printErrorMessage(enum ErrorType errorType){
    switch (errorType) {
        case MEMORY_ALLOCATION:{
            printf("\n\nMemory allocation failed!\n\n");
            break;
        }
        case FILE_NOT_FOUND:{
            printf("\n\nFile not found!\n\n");
            break;
        }
        case NULL_POINTER_EXCEPTION:{
            printf("\n\nNull pointer exception!\n\n");
            break;
        }
        case USER_DOES_NOT_EXIST:{
            printf("\n\nUser does not exist!\n\n");
            break;
        }
        case PRODUCT_DOES_NOT_EXIST:{
            printf("\n\nProduct does not exist!\n\n");
            break;
        }
        case USER_ARRAY_FULL:{
            printf("\n\nUserArray is full!\n\n");
            break;
        }
        case USER_ARRAY_DOES_NOT_EXIST:{
            printf("\n\nUserArray does not exist!\n\n");
            break;
        }
        case PRODUCT_ARRAY_FULL:{
            printf("\n\nProductArray is full!\n\n");
            break;
        }
        case PRODUCT_STACK_FULL:{
            printf("\n\nProduct stack is full!\n\n");
            break;
        }
        case PRODUCT_STACK_EMPTY:{
            printf("\n\nProduct stack is empty!\n\n");
            break;
        }
        default:{
            printf("\n\nUndefined error!\n\n");
            break;
        }
    }
}