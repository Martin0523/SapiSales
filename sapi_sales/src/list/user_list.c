#include "user_list.h"

void createUserNode(UserNode **userNode, User *userValue) {
    *userNode = (UserNode*) malloc(sizeof (UserNode));
    createUser(&(*userNode)->userValue);
    setUserData((*userNode)->userValue, userValue->name, userValue->type, userValue->gender, userValue->specialization,
                userValue->birthDate.birthYear, userValue->birthDate.birthMonth, userValue->birthDate.birthDay);
    (*userNode)->next = NULL;

}

void printUserList(UserNode *userNode, char *destination) {
    freopen(destination, "w", stdout);
    UserNode *p = userNode;
    while (p->next != NULL){
        printUser(p->userValue);
        p = p->next;
    }
    freopen("CON", "w", stdout);
}

void insertFirst(UserNode **userNode, User *userValue) {
    UserNode *new;
    createUserNode(&new, userValue);
    new->next = *userNode;
    *userNode = new;
}

void insertLast(UserNode **userNode, User *userValue) {
    UserNode *new, *p = *userNode;
    createUserNode(&new, userValue);
    new->next = NULL;
    if (*userNode == NULL){
        *userNode = new;
    } else{
        while (p->next != NULL){
            p = p->next;
        }
        p->next = new;
    }
}

void insertNPos(UserNode *userNode, User *userValue, int n) {
    UserNode *new, *p;
    createUserNode(&new, userValue);
    if (userNode == NULL || (n == 1)){
        new->next = userNode->next;
        userNode->next = new;
    } else{
        p = userNode;
        int i = 2;
        while (p->next != NULL && i < n){
            p = p->next;
            i++;
        }
        new->next = p->next;
        p->next = new;
    }
}

void deleteUserList(UserNode **userNode) {
    if (*userNode != NULL){
        UserNode *p = *userNode;
        while (*userNode != NULL){
            p = *userNode;
            *userNode = (*userNode)->next;
            free(p);
        }
    }
}

User *removeFirst(UserNode **userNode) {
    UserNode *p;
    if (*userNode != NULL){
        p = *userNode;
        *userNode = (*userNode)->next;
        return p->userValue;
    } else{
        return NULL;
    }
}

User *removeLast(UserNode *userNode) {
    if (userNode != NULL){
        UserNode *p = userNode;
        while (p->next->next != NULL){
            p = p->next;
        }
        UserNode *q = p->next;
        p->next = NULL;
        free(q);
        return p->userValue;
    }
    return NULL;
}

User *findElementInList(UserNode *userNode, int userId) {
    UserNode *p = userNode;
    if (userNode != NULL){
        while (p != NULL){
            if (p->userValue->id == userId){
                return p->userValue;
            }
            p = p->next;
        }
    }
    return NULL;
}
