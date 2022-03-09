#ifndef SAPISALES_PRODUCTARRAY_H
#define SAPISALES_PRODUCTARRAY_H

#include "product.h"
#include "stdbool.h"

typedef struct {
    Product** products;
    unsigned int capacity;
    unsigned int numberOfProducts;
}ProductArray;

void createProductArray(ProductArray **productArray, unsigned int maxProducts);
void deleteProductArray(ProductArray **productArray);
bool addNewProduct(ProductArray* productArray, Product *newProduct);

#endif //SAPISALES_PRODUCTARRAY_H
