#include "../../headers/stack/product_stack.h"

void createProductStack(ProductStack **productStack, unsigned int capacity) {
    *productStack = (ProductStack*) malloc(sizeof (ProductStack));
    (*productStack)->products = (Product**) malloc(capacity*sizeof (Product*));
    for (int i = 0; i < capacity; i++){
        createProduct(&(*productStack)->products[i]);
    }
    (*productStack)->top = -1;
    (*productStack)->capacity = capacity;
}

void push(ProductStack *productStack, Product *product){
    if (stackIsFull(productStack)){
        return;
    } else{
        productStack->top++;
        productStack->products[productStack->top] = product;
    }
}

void pop(ProductStack *productStack) {
    if (stackIsEmpty(productStack)){
        return;
    } else{
//        deleteProduct(productStack->products[productStack->top]);
        productStack->top--;
    }
}

Product *top(ProductStack *productStack) {
    if (stackIsEmpty(productStack)){
        return NULL;
    }
    printProduct(productStack->products[productStack->top]);
}

bool stackIsFull(ProductStack *productStack) {
    if (productStack->top == productStack->capacity-1){
        printErrorMessage(PRODUCT_STACK_FULL);
        return true;
    }
    return false;
}

bool stackIsEmpty(ProductStack *productStack) {
    if (productStack->top < 0){
        printErrorMessage(PRODUCT_STACK_EMPTY);
        return true;
    }
    return false;
}

void deleteProductStack(ProductStack **productStack) {
    for (int i = 0; i < (*productStack)->capacity-1; i++){
        free((*productStack)->products[i]);
    }
    free(*productStack);
    printDeleteMessage(PRODUCT_STACK_DELETED);
}


