#ifndef SAPISALES_USER_BST_H
#define SAPISALES_USER_BST_H

#include "user.h"
#include "stdbool.h"

typedef struct UserTreeNode{
    User* info;
    struct UserTreeNode *left, *right;
}UserTreeNode;

void create(UserTreeNode** userTreeNode);
void insert(UserTreeNode** userTreeNode, User* user);
bool search(UserTreeNode* userTreeNode, int ID);
UserTreeNode* delete(UserTreeNode* userTreeNode, int ID);
UserTreeNode* minValueNode(UserTreeNode* userTreeNode);
void inorderPrint(UserTreeNode* userTreeNode, char* destination);
void preorderPrint(UserTreeNode* userTreeNode, char* destination);
void postorderPrint(UserTreeNode* userTreeNode, char* destination);
User* minimum(UserTreeNode* userTreeNode);
User* maximum(UserTreeNode* userTreeNode);
void destroyTree(UserTreeNode* userTreeNode);
void destroy(UserTreeNode** userTreeNode);

#endif //SAPISALES_USER_BST_H
