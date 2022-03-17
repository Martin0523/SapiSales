#include "user_array.h"

void createUserArray(UserArray **userArray, unsigned int maxUsers) {
    *userArray = (UserArray*) malloc(sizeof (UserArray));
    (*userArray)->users = (User**) malloc(maxUsers*sizeof(User*));
    for (int i = 0; i < maxUsers; i++){
        createUser(&(*userArray)->users[i]);
    }
}

void deleteUserArray(UserArray **userArray) {
    for (int i = 0; i < (*userArray)->numberOfUsers; i++){
        free((*userArray)->users[i]);
    }
    free(*userArray);
    printDeleteMessage(USER_ARRAY_DELETED);
}

bool addNewUser(UserArray *userArray, User *newUser) {
    if (userArray->capacity < userArray->numberOfUsers){
        return false;
    }
    userArray->users[userArray->numberOfUsers] = newUser;
    userArray->numberOfUsers++;
    return true;
}

User *getUserAtPosition(UserArray *userArray, int position) {
    printUser(userArray->users[position]);
}
