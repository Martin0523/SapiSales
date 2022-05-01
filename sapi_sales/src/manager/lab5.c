#include "lab5.h"

void testProductStackFunctionalities() {
    ///Declaring Stack
    ProductStack *productStack;

    ///Creating Stack
    createProductStack(&productStack, 4);

    ///Declaring product
    Product *product1;

    ///Creating product
    createProduct(&product1);

    ///Fill product with data
    setProductData(product1, "MS1", "Apple", FRUIT, 10);

    int choice, i = 0;
    while (1){
        printf("\n\n1. Push Operation\n");
        printf("2. Pop Operation\n");
        printf("3. Top Operation\n");
        printf("4. isEmpty Operation\n");
        printf("5. isFull Operation\n");
        printf("6. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:{
                push(productStack, product1);
                break;
            }
            case 2:{
                pop(productStack);
                break;
            }
            case 3:{
                top(productStack);
                break;
            }
            case 4:{
                stackIsEmpty(productStack);
                break;
            }
            case 5:{
                stackIsFull(productStack);
                break;
            }
            case 6:{
                deleteProductStack(&productStack);
                return;
            }
            default:
                printf("Incorrect choice \n");
        }
    }

}
