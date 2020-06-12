#include <stdio.h>
#include <math.h>
struct trekant{
    float a;
    float b;
    float c;
};

int main() {
    struct trekant trekant;
    trekant.a = 2;
    trekant.b = 2;
    trekant.c = 2;

    float s = 2; // Sidekant
    s = (trekant.a + trekant.b + trekant.c) / 2;

    float Arealet = sqrt(s * (s - trekant.a) * (s - trekant.b) * (s - trekant.c));

    printf("Arelset er: %2.f", Arealet);
    return 0;
}
