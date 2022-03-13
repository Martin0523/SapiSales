
#ifndef SAPISALES_PRODUCT_H
#define SAPISALES_PRODUCT_H

#include "sys/utime.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
#include "time.h"
#include "errors.h"
#include "messages.h"

enum ProductType{
    GROCERY,
    FRUIT,
    SCHOOL,
    OBJECT
};

typedef struct {
    char id[10];
    char name[20];
    enum ProductType type;
    unsigned int amount;
    time_t creationDate;
}Product;

char* getProductType(enum ProductType type);

void createProduct(Product **product);

void setProductData(Product* product, char* id, char* name, enum ProductType type, unsigned int amount);

/*Product* createProduct(
        char id[10],
        char name[20],
        enum ProductType type,
                unsigned int amount);
*/

void printProduct(Product* product);

void deleteProduct(Product* product);

#endif //SAPISALES_PRODUCT_H
