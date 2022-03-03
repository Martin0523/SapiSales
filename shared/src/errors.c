
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
        default:{
            printf("\n\nUndefined error!\n\n");
            break;
        }
    }
}