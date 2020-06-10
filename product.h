#ifndef ELI1500_PRODUCT_H
#define ELI1500_PRODUCT_H

// Product definition/type
typedef struct product{
    char name[10];
    double price;
    double mva;
} Product_t;


int invoice(Product_t product){
    printf("\n******************************");
    printf("\n* Product name: %s", product.name);
    printf("\n* Product price: %.2f", product.price);
    printf("\n* Product MVA: %.2f", product.mva* product.price);
    printf("\n* ------------------------");
    printf("\n* TOTAL PRICE: %.2f NOK", (product.price * product.mva)+product.price);
    return 0;
}

int getOder(Product_t *product){
    printf("Menu options:\n");
    for (int i = 0; i < 2; ++i)
        printf("[%i] - %s price %.2f NOK\n", i+1, product[i].name, product[i].price);

    printf("\nEnter the your order number: ");
    int oderNumber;
    scanf("%i", &oderNumber);
    return oderNumber-1;
}

#endif
