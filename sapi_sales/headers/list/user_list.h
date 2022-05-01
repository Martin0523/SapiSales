#ifndef SAPISALES_USER_LIST_H
#define SAPISALES_USER_LIST_H

#include "user.h"

typedef struct UserNode{
    User* userValue;
    struct UserNode* next;
}UserNode;

void createUserNode(UserNode** userNode, User* userValue);
void printUserList(UserNode* userNode, char* destination);
User* findElementInList(UserNode* userNode, int userId);
void insertFirst(UserNode **userNode, User* userValue);
void insertLast(UserNode **userNode, User* userValue);
void insertNPos(UserNode *userNode, User* userValue, int n);
User* removeFirst(UserNode** userNode);
User* removeLast(UserNode* userNode);
void deleteUserList(UserNode** userNode);

#endif //SAPISALES_USER_LIST_H
