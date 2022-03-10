#include "lab3.h"



void testUserArrayFunctionalities() {
    UserArray *userArray;
    createUserArray(&userArray, 10);

    User *user1, *user2, *user3;

    createUser(&user1);
    createUser(&user2);
    createUser(&user3);

    setUserData(user1, "John Peterson", STUDENT, MALE, COMPUTER_SCIENCE, 2003, 11, 3);
    setUserData(user2, "Jane Austin", TEACHER, FEMALE, ENGINEERING, 1996, 4, 1);
    setUserData(user3, "John Peterson", STUDENT, MALE, COMPUTER_SCIENCE, 2003, 11, 3);

    addNewUser(userArray, user1);
    addNewUser(userArray, user2);
    addNewUser(userArray, user3);

    getUserAtPosition(userArray, 0);
    getUserAtPosition(userArray, 1);
    getUserAtPosition(userArray, 2);

    deleteUserArray(&userArray);
}

void testProductArrayFunctionalities() {
    ProductArray *productArray;
    createProductArray(&productArray, 10);

    Product *product1, *product2, *product3;

    createProduct(&product1);
    createProduct(&product2);
    createProduct(&product3);

    setProductData(product1, "MS1", "Apple", FRUIT, 10);
    setProductData(product2, "MS2", "Book", SCHOOL, 4);
    setProductData(product3, "MS3", "Tomato", GROCERY, 20);

    addNewProduct(productArray, product1);
    addNewProduct(productArray, product2);
    addNewProduct(productArray, product3);

    getProductAtPosition(productArray, 0);
    getProductAtPosition(productArray, 1);
    getProductAtPosition(productArray, 2);

    deleteProductArray(&productArray);
}

