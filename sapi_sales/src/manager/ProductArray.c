//
// Created by Legion on 3/9/2022.
//

#include "ProductArray.h"
#include "errors.h"

void createProductArray(ProductArray **productArray, unsigned int maxProducts) {
    *productArray = (ProductArray*) malloc(maxProducts*sizeof (ProductArray));
    if (!(*productArray)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
}

void deleteProductArray(ProductArray **productArray) {
    *productArray = NULL;
    free(*productArray);
}

bool addNewProduct(ProductArray *productArray, Product *newProduct) {
    if (productArray->numberOfProducts >= productArray->capacity){
        printErrorMessage(PRODUCT_ARRAY_FULL);
        return false;
    }
    productArray->products[productArray->numberOfProducts] = newProduct;
    productArray->numberOfProducts++;
    return true;
}
