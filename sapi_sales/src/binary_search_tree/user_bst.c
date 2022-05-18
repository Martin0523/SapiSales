#include "user_bst.h"

void create(UserTreeNode **userTreeNode) {
    *userTreeNode = (UserTreeNode*) malloc(sizeof (UserTreeNode));
    createUser(&(*userTreeNode)->info);
    (*userTreeNode)->left = NULL;
    (*userTreeNode)->right = NULL;
}

void insert(UserTreeNode **userTreeNode, User *user) {
    if ((*userTreeNode) == NULL){
        create(&(*userTreeNode));
        (*userTreeNode)->info = user;
    }
    else if (user->id < (*userTreeNode)->info->id){
        insert(&(*userTreeNode)->left, user);
    } else if (user->id > (*userTreeNode)->info->id){
        insert(&(*userTreeNode)->right, user);
    }
}

bool search(UserTreeNode *userTreeNode, int ID) {
    if (userTreeNode == NULL){
        return false;
    }
    if (userTreeNode->info->id == ID){
        return true;
    }
    if (userTreeNode->info->id < ID){
        return search(userTreeNode->right, ID);
    } else {
        return search(userTreeNode->left, ID);
    }
}

UserTreeNode* delete(UserTreeNode *userTreeNode, int ID) {
    if (userTreeNode == NULL){
        return userTreeNode;
    }
    if (ID < userTreeNode->info->id){
        userTreeNode->left = delete(userTreeNode->left, ID);
    } else if (ID > userTreeNode->info->id){
        userTreeNode->right = delete(userTreeNode->right, ID);
    } else {
        if (userTreeNode->left == NULL){
            UserTreeNode* temp = userTreeNode->right;
            free(userTreeNode->info);
            free(userTreeNode);
            return temp;
        }
        else if (userTreeNode->right == NULL){
            UserTreeNode* temp = userTreeNode->left;
            free(userTreeNode->info);
            free(userTreeNode);
            return temp;
        }

        UserTreeNode* temp = minValueNode(userTreeNode->right);
        userTreeNode->info = temp->info;
        userTreeNode->right = delete(userTreeNode->right, temp->info->id);

    }
    return userTreeNode;
}

UserTreeNode *minValueNode(UserTreeNode *userTreeNode) {
    UserTreeNode* current = userTreeNode;
    while (current && current->left != NULL){
        current = current->left;
    }
    return current;
}

void inorderPrint(UserTreeNode *userTreeNode, char* destination) {
    freopen(destination, "w", stdout);
    if (userTreeNode != NULL){
        inorderPrint(userTreeNode->left, destination);
        printUser(userTreeNode->info);
        inorderPrint(userTreeNode->right, destination);
    }
    freopen("CON", "w", stdout);
}

void preorderPrint(UserTreeNode *userTreeNode, char *destination) {
    freopen(destination, "w", stdout);
    if (userTreeNode != NULL){
        printUser(userTreeNode->info);
        preorderPrint(userTreeNode->left, destination);
        preorderPrint(userTreeNode->right, destination);
    }
    freopen("CON", "w", stdout);
}

void postorderPrint(UserTreeNode *userTreeNode, char *destination) {
    freopen(destination, "w", stdout);
    if (userTreeNode != NULL){
        preorderPrint(userTreeNode->left, destination);
        preorderPrint(userTreeNode->right, destination);
        printUser(userTreeNode->info);
    }
    freopen("CON", "w", stdout);
}

User* minimum(UserTreeNode *userTreeNode) {
    UserTreeNode *p;
    create(&p);
    p = userTreeNode;
    while (p->left != NULL){
        p = p->left;
    }
    return p->info;
}

User* maximum(UserTreeNode *userTreeNode) {
    UserTreeNode *p;
    create(&p);
    p = userTreeNode;
    while (p->right != NULL){
        p = p->right;
    }
    return p->info;
}

void destroyTree(UserTreeNode *userTreeNode) {
    if (userTreeNode == NULL){
        return;
    }
    destroyTree(userTreeNode->left);
    destroyTree(userTreeNode->right);
    free(userTreeNode);
}

void destroy(UserTreeNode **userTreeNode) {
    destroyTree(*userTreeNode);
    *userTreeNode = NULL;
}
