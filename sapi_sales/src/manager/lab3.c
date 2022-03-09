#include "lab3.h"



void testUserArrayFunctionalities() {
    ///Declaring user pointers
    User *user1, *user2;

    ///Creating users
    createUser(&user1);
    createUser(&user2);

    ///Filling user data
    setUserData(user1, "User1 Data", STUDENT, MALE, COMPUTER_SCIENCE, 2003, 11, 3);
    setUserData(user2, "User2 Data", TEACHER, FEMALE, ENGINEERING, 1996, 4, 1);

    ///Declaring user array pointer
    UserArray *userArray1;

    ///Creating a user array
    createUserArray(&userArray1, 10);

    ///Filling user array with users
    addNewUser(userArray1, user1);
    addNewUser(userArray1, user2);

    ///Printing out users
    getUserAtPosition(userArray1, 0);
    getUserAtPosition(userArray1, 1);
    getUserAtPosition(userArray1, 2);

    deleteUserArray(&userArray1);


}

void testProductArrayFunctionalites() {

    ///Declaring product pointers
    Product *product1, *product2, *product3;

    ///Create products
    createProduct(&product1);
    createProduct(&product2);
    createProduct(&product3);

    ///Fill with data
    setProductData(product1, "MS4", "Strawberry", FRUIT, 10);
    setProductData(product2, "MS5", "Pen", SCHOOL, 4);
    setProductData(product3, "MS6", "Pasta", GROCERY, 20);

    ///Declaring product array pointer
    ProductArray *productArray1;

    ///Creating product array
    createProductArray(&productArray1, 10);

    ///Filling product array with products
    addNewProduct(productArray1, product1);
    addNewProduct(productArray1, product2);
    addNewProduct(productArray1, product3);

}

