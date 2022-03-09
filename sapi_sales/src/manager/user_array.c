#include "user_array.h"
#include "errors.h"

void createUserArray(UserArray **userArray, unsigned int maxUsers) {
    *userArray = (UserArray*) malloc(maxUsers*sizeof(UserArray));
    if (!(*userArray)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
}

void deleteUserArray(UserArray **userArray){
    *userArray = NULL;
    free(*userArray);
}

bool addNewUser(UserArray *userArray, User *newUser) {
    if (userArray->numberOfUsers >= userArray->capacity){
        printErrorMessage(USER_ARRAY_FULL);
        return false;
    }
    userArray->users[userArray->numberOfUsers] = newUser;
    userArray->numberOfUsers++;
    return true;
}

User *getUserAtPosition(UserArray *userArray, int position) {
    if(userArray == NULL){
        printErrorMessage(USER_ARRAY_DOES_NOT_EXIST);
    } else
    if (position > userArray->numberOfUsers - 1){
        printErrorMessage(USER_DOES_NOT_EXIST);
    } else{
        printUser(userArray->users[position]);
    }
}
