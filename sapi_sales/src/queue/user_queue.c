#include "user_queue.h"

void createUserQueue(UserQueue **userQueue, unsigned int maxSize) {
    *userQueue = (UserQueue*) malloc(sizeof (UserQueue));
    (*userQueue)->users = (User**) malloc(maxSize*sizeof (User*));
    for (int i = 0; i < maxSize; i++){
        createUser(&(*userQueue)->users[i]);
    }
    (*userQueue)->size = maxSize;
    (*userQueue)->front = 0;
    (*userQueue)->rear = -1;
}

bool queueIsEmpty(UserQueue *userQueue) {
    return userQueue->rear == -1;
}

bool queueIsFull(UserQueue *userQueue) {
    return userQueue->rear == userQueue->size-1;
}

void enqueue(UserQueue *userQueue, User *user) {
    if (!queueIsFull(userQueue)){
        userQueue->rear++;
        userQueue->users[userQueue->rear] = user;
    }
}

void dequeue(UserQueue *userQueue) {
    if (!queueIsEmpty(userQueue)){
        for (int i = 0; i < userQueue->rear; i++){
            userQueue->users[i-1] = userQueue->users[i];
        }
        userQueue->rear--;
    }
}

int findElementInQueue(UserQueue *userQueue, int userId) {
    for (int i = 0; i < userQueue->rear; i++){
        if (userQueue->users[i]->id == userId){
            return i;
        }
    }
    return -1;
}

void printQueue(UserQueue *userQueue, char *destination) {
    freopen(destination, "w", stdout);
    for (int i = 0; i < userQueue->rear; i++){
        printUser(userQueue->users[i]);
    }
    freopen("CON", "w", stdout);
}

void deleteQueue(UserQueue **userQueue) {
    for (int i = 0; i < (*userQueue)->size; i++){
        printUser((*userQueue)->users[i]);
        free((*userQueue)->users[i]);
    }
    free(*userQueue);
    printDeleteMessage(USER_QUEUE_DELETED);
}
