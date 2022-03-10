#ifndef SAPISALES_PRODUCT_ARRAY_H
#define SAPISALES_PRODUCT_ARRAY_H

#include "product.h"
#include "stdbool.h"
#include "messages.h"

typedef struct {
    Product** products;
    int capacity;
    int numberOfProducts;
}ProductArray;

void createProductArray(ProductArray **productArray, unsigned int maxProducts);
void deleteProductArray(ProductArray **productArray);
bool addNewProduct(ProductArray* productArray, Product *newProduct);
Product* getProductAtPosition(ProductArray* productArray, int position);

#endif //SAPISALES_PRODUCT_ARRAY_H
