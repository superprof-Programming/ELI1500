#include <stdio.h>
#include <string.h>
#include "product.h"

int main() {
    // Create some product
    Product_t spice;
    strcpy(spice.name, "Space");
    spice.price = 88;

    Product_t fireball;
    strcpy(fireball.name, "Fireball");
    fireball.price = 97;

    // Add products to the menu
    Product_t menu[2];
    menu[0] = spice;
    menu[1] = fireball;

    printf("Velkommen til Hotstaff\n");
    // Get the get product number
    int product_number = getOder(menu);
    int site = 0;
    printf("Sit here or take with you? Yes (1) / No (0): ");
    scanf("%i", &site);

    // Add the MVA and prince the invoice
    if (site) {
        menu[product_number].mva = 0.25;
        return invoice(menu[product_number]);
    }

    menu[product_number].mva = 0.14;
    return invoice(menu[0]);
}
