#include "lab9.h"

void testUserListFunctionalities() {
    User *user1, *user2, *user3, *user4;
    createUser(&user1);
    createUser(&user2);
    createUser(&user3);
    createUser(&user4);

    setUserData(user1, "User One", TEACHER, FEMALE, ENGINEERING, 1989, 4, 12);
    setUserData(user2, "User Two", STUDENT, MALE, INFORMATICS, 2002, 5, 7);
    setUserData(user3, "User Three", STUDENT, FEMALE, AUTOMATION, 2001, 9, 29);
    setUserData(user4, "User four", TEACHER,  MALE, MATHEMATICS_INFORMATICS, 1985, 10, 10);

    UserNode *userNode;
    createUserNode(&userNode, user1);
    insertFirst(&userNode, user2);
    insertFirst(&userNode, user4);
    insertNPos(userNode, user3, 1);
    insertLast(&userNode, user1);

    printf("1\n");
    printUserList(userNode, "CON");

    removeFirst(&userNode);
    printf("\n2\n");
    printUserList(userNode, "CON");

    removeLast(userNode);
    printf("\n3\n");
    printUserList(userNode, "CON");

    printf("\n4\n");
    printUser(findElementInList(userNode,1060));
    deleteUserList(&userNode);
}
