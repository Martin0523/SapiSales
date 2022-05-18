#include "lab10.h"

void testUserBSTFunctionalities() {
    User *user1, *user2, *user3, *user4;
    createUser(&user1);
    createUser(&user2);
    createUser(&user3);
    createUser(&user4);

    setUserData(user1, "User One", TEACHER, FEMALE, ENGINEERING, 1989, 4, 12);
    setUserData(user2, "User Two", STUDENT, MALE, INFORMATICS, 2002, 5, 7);
    setUserData(user3, "User Three", STUDENT, FEMALE, AUTOMATION, 2001, 9, 29);
    setUserData(user4, "User four", TEACHER,  MALE, MATHEMATICS_INFORMATICS, 1985, 10, 10);

    user1->id = 5;
    user2->id = 4;
    user3->id = 6;
    user4->id = 7;

    UserTreeNode *userTreeNode = NULL;
    insert(&userTreeNode, user1);
    insert(&userTreeNode, user2);
    insert(&userTreeNode, user3);
    insert(&userTreeNode, user4);

    inorderPrint(userTreeNode, "CON");

    if(search(userTreeNode, 6)){
        printf("\n6 Benne van\n");
    } else printf("\n6 Nincs benne\n");

    if(search(userTreeNode, 3)){
        printf("\n3 Benne van\n");
    } else printf("\n3 Nincs benne\n");

    printf("\nInorder\n");
    inorderPrint(userTreeNode, "CON");

    printf("\nPreorder\n");
    preorderPrint(userTreeNode, "CON");

    printf("\nPostorder\n");
    postorderPrint(userTreeNode, "CON");

    printf("\nMinimum\n");
    printUser(minimum(userTreeNode));

    printf("\nMaximum\n");
    printUser(maximum(userTreeNode));

    printf("\nDelete utan\n");
    delete(userTreeNode, 6);
    inorderPrint(userTreeNode, "CON");

    printf("\nasd\n");

    destroy(&userTreeNode);

}
