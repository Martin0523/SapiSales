#include "user_queue.h"

void createUserQueue(UserQueue **userQueue, unsigned int maxSize) {
    *userQueue = (UserQueue*) malloc(sizeof (UserQueue));
    (*userQueue)->users = (User**) malloc(maxSize*sizeof (User*));
    for (int i = 0; i < maxSize; i++){
        createUser(&(*userQueue)->users[i]);
    }
    (*userQueue)->size = maxSize;
    (*userQueue)->front = -1;
    (*userQueue)->rear = -1;
}

bool queueIsEmpty(UserQueue *userQueue) {
    return userQueue->front == -1;
}

bool queueIsFull(UserQueue *userQueue) {
    return ((userQueue->front == userQueue->rear + 1) || (userQueue->front == 0 && userQueue->rear == userQueue->size - 1));
}

void enqueue(UserQueue *userQueue, User *user) {
    if (!queueIsFull(userQueue)){
//        userQueue->rear = (userQueue->rear + 1) % userQueue->size;
//        userQueue->users[userQueue->rear] = user;
        if (userQueue->front == -1){
            userQueue->front = 0;
        }
        userQueue->rear = (userQueue->rear + 1) % userQueue->size;
        userQueue->users[userQueue->rear] = user;
    }
}

void dequeue(UserQueue *userQueue) {
    if (!queueIsEmpty(userQueue)){
//        for (int i = 0; i < userQueue->rear; i++){
//            userQueue->users[i-1] = userQueue->users[i];
//        }
//        userQueue->rear--;
//        User *temp = userQueue->users[userQueue->front];
//        userQueue->front = (userQueue->front + 1) % userQueue->size;
        if (userQueue->front == userQueue->rear){
            userQueue->front = -1;
            userQueue->rear = -1;
        } else{
            userQueue->front = (userQueue->front + 1) % userQueue->size;
        }
    }
}

int findElementInQueue(UserQueue *userQueue, int userId) {
    if (!queueIsEmpty(userQueue)){
        for (int i = userQueue->front; i != userQueue->rear; i = (i + 1) % userQueue->size){
            if (userQueue->users[i]->id == userId){
                return i;
            }

        }
        if (userQueue->users[userQueue->rear]->id == userId){
            return userQueue->rear;
        }
    }
    return -1;
}

void printQueue(UserQueue *userQueue, char *destination) {
    freopen(destination, "w", stdout);
    if (!queueIsEmpty(userQueue)){
        for (int i = userQueue->front; i != userQueue->rear; i = (i + 1) % userQueue->size){
            printUser(userQueue->users[i]);
        }
        printUser(userQueue->users[userQueue->rear]);
    } else{
        printf("Queue is empty!");
    }
    freopen("CON", "w", stdout);
}

void deleteQueue(UserQueue **userQueue) {
    for (int i = 0; i < (*userQueue)->size; i++){
        deleteUser(&(*userQueue)->users[i]);
    }
    free(*userQueue);
    printDeleteMessage(USER_QUEUE_DELETED);
}
