#ifndef SAPISALES_USER_ARRAY_H
#define SAPISALES_USER_ARRAY_H

#include "user.h"
#include "stdbool.h"

typedef struct {
    User** users;
    unsigned int capacity;
    unsigned int numberOfUsers;
}UserArray;

void createUserArray(UserArray **userArray, unsigned int maxUsers);
void deleteUserArray(UserArray **userArray);
bool addNewUser(UserArray* userArray, User* newUser);
User* getUserAtPosition(UserArray* userArray, int position);

#endif //SAPISALES_USER_ARRAY_H
