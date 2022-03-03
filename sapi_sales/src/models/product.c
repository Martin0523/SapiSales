//
// Created by Legion on 3/1/2022.
//

#include "product.h"
#include "errors.h"

char *getProductType(enum ProductType type) {
    switch (type) {
        case GROCERY:
            return "Grocery";
        case FRUIT:
            return "Fruit";
        case SCHOOL:
            return "School";
        case OBJECT:
            return "Object";
        default:
            return "Undefined";
    }
}
/*
void createProduct(Product **product) {
    *product = (Product*) malloc(sizeof (Product));
    if (!(*product)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
}*/


Product *createProduct(char *id, char *name, enum ProductType type, unsigned int amount) {
    Product* newProduct = malloc(sizeof(Product));
    strcpy(newProduct->id, id);
    strcpy(newProduct->name, name);
    newProduct->type = type;
    newProduct->amount = amount;
    newProduct->creationDate = time(NULL);
    return newProduct;
}

void printProduct(Product *product) {
    printf("%s details:\n"
           "\t - ID: %s\n"
           "\t - TYPE: %s\n"
           "\t - AMOUNT: %u\n"
           "\t - CREATION DATE: %ld\n\n",
           product->name,
           product->id,
           getProductType(product->type),
           product->amount,
           product->creationDate);
}

void deleteProduct(Product *product) {
    product = NULL;
}


