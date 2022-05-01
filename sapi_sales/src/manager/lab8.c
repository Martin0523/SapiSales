#include "lab8.h"

void testUserQueueFunctionalities() {
    ///Declaring queue
    UserQueue *userQueue;

    ///Creating queue
    createUserQueue(&userQueue, 3);

    ///Declaring users
    User *user1, *user2, *user3, *user4;

    ///Creating users
    createUser(&user1);
    createUser(&user2);
    createUser(&user3);
    createUser(&user4);

    ///Filling users with data
    setUserData(user1, "User One", STUDENT, MALE, COMPUTER_SCIENCE, 1999, 12, 3);
    setUserData(user2, "User Two", TEACHER, FEMALE, ENGINEERING, 1989, 3, 5);
    setUserData(user3, "User Three", STUDENT, FEMALE, INFORMATICS, 2000, 1, 5);
    setUserData(user4, "User Four", STUDENT, MALE, AUTOMATION, 2002, 4, 2);

    enqueue(userQueue, user1);
    enqueue(userQueue, user2);
    enqueue(userQueue, user3);
    enqueue(userQueue, user4);
    printQueue(userQueue, "CON");

    dequeue(userQueue);
    dequeue(userQueue);
    enqueue(userQueue, user2);
    printf("\nasd\n");
    printQueue(userQueue, "CON");

    if (findElementInQueue(userQueue, 1020) == -1){
        printErrorMessage(ELEMENT_IN_QUEUE_NOT_FOUND);
    } else{
        printf("\n%i\n", findElementInQueue(userQueue, 1020));
    }

    deleteUser(&user1);
    deleteUser(&user2);
    deleteUser(&user3);
    deleteUser(&user4);
//    deleteQueue(&userQueue);
}
