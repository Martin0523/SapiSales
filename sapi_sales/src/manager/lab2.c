#include "lab2.h"

void testUserFunctionalities() {
    srand(time(0));
    ///Declaring user pointers
    User *user1, *user2, *user3;

    ///Creating users
    createUser(&user1);
    createUser(&user2);
    createUser(&user3);

    ///Fill with data
    setUserData(user1, "John Peterson", rand()%1, rand()%1, rand()%6, rand()%2023, rand()%13, rand()%32);
    setUserData(user2, "Jane Austin", TEACHER, FEMALE, ENGINEERING, 1996, 10, 27);
    setUserData(user3, "John Peterson", STUDENT, MALE, COMPUTER_SCIENCE, 2003, 7, 7);

    ///Print users
    printUser(user1);
    printUser(user2);
    printUser(user3);

    ///Delete users
    deleteUser(&user1);
    deleteUser(&user2);
    deleteUser(&user3);

}

void testProductFunctionalities() {

    ///Declaring product pointers
    Product *product1, *product2, *product3;

    ///Create products
    createProduct(&product1);
    createProduct(&product2);
    createProduct(&product3);
    //Product* product1 = createProduct("MS1", "Apple", FRUIT, 10);
    //Product* product2 = createProduct("MS2", "Book", SCHOOL, 4);
    //Product* product3 = createProduct("MS3", "Tomato", GROCERY, 20);

    ///Fill with data
    setProductData(product1, "MS1", "Apple", FRUIT, 10);
    setProductData(product2, "MS2", "Book", SCHOOL, 4);
    setProductData(product3, "MS3", "Tomato", GROCERY, 20);

    ///Print products
    printProduct(product1);
    printProduct(product2);
    printProduct(product3);

    ///Delete products
    deleteProduct(product1);
    deleteProduct(product2);
    deleteProduct(product3);
}


