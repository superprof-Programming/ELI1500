/*
Lag et testprogram der brukeren skriver inn en radius og en høyde. Programmet skal
beregne overflaten med begge funksjonene, og skrive ut begge resultatene.
 */

#include <stdio.h>
#include <math.h>

void areal(float radius, float hoyde, float *resultat){
    const double PI = 2 * acos(0.0);
    double sirkelFlate = 2 * radius * radius * PI;
    double hoydeFlate = 2 * PI * radius * hoyde;

    float overflate = sirkelFlate + hoydeFlate;

    *resultat = overflate;
}

int main() {
    float resultat, radius, hoyde;

    printf("Hoyde: ");
    scanf("%f", &hoyde);

    printf("\nRadius: ");
    scanf("%f", &radius);

    areal(radius, hoyde, &resultat);

    printf("\nResultat overflatten er %.2f", resultat);

    return 0;
}
