/*
    Overflaten av en sylinder er gitt ved a=2·π·r2+ 2· π ·r·h, der r er radien og h er høyden av
    sylinderen.
    Lag en funksjon float areal1 (float radius, float hoyde) som får inn radius og høyde til en
    sylinder, og returnerer arealet av overflaten.
 */
#include <stdio.h>
#include <math.h>

float areal1(float radius, float hoyde){
    const double PI = 2 * acos(0.0);
    double sirkelFlate = 2 * radius * radius * PI;
    double hoydeFlate = 2 * PI * radius * hoyde;

    float overflate = sirkelFlate + hoydeFlate;

    return overflate;
}

int main() {
    float radius, hoyde;

    printf("Hoyde: ");
    scanf("%f", &hoyde);

    printf("\nRadius: ");
    scanf("%f", &radius);

    printf("\nOverflatten er: %.2f", areal1(radius, hoyde));

    return 0;
}
