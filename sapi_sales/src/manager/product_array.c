#include "product_array.h"

void createProductArray(ProductArray **productArray, unsigned int maxProducts) {
    *productArray = (ProductArray*) malloc(sizeof (ProductArray));
    (*productArray)->products = (Product**) malloc(maxProducts*sizeof (Product*));
    for (int i = 0; i < maxProducts; i++){
        createProduct(&(*productArray)->products[i]);
    }
}

void deleteProductArray(ProductArray **productArray) {
    for (int i = 0; i < (*productArray)->numberOfProducts; i++){
        free((*productArray)->products[i]);
    }
    free(*productArray);

}

bool addNewProduct(ProductArray *productArray, Product *newProduct) {
    if (productArray->capacity < productArray->numberOfProducts){
        return false;
    }
    productArray->products[productArray->numberOfProducts] = newProduct;
    productArray->numberOfProducts++;
    return true;
}

Product *getProductAtPosition(ProductArray *productArray, int position) {
    printProduct(productArray->products[position]);
}
