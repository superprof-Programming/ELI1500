/*
    Lag en funksjon areal2 som får inn radius og høyde til en sylinder, og en peker til variabelen
    der arealet skal legges; void areal2(float radius, float hoyde, float *areal).
 */
#include <stdio.h>
#include <math.h>

void areal2(float radius, float hoyde, float *areal){
    const double PI = 2 * acos(0.0);
    double sirkelFlate = 2 * radius * radius * PI;
    double hoydeFlate = 2 * PI * radius * hoyde;

    float overflate = sirkelFlate + hoydeFlate;

    *areal = overflate;
}

int main() {
    float arealet = 0;
    float radius, hoyde;

    printf("Hoyde: ");
    scanf("%f", &hoyde);

    printf("\nRadius: ");
    scanf("%f", &radius);

    areal2(radius, hoyde, &arealet);

    printf("\nOverflatten er: %.2f", arealet);

    return 0;
}
