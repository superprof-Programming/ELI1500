#include <stdio.h>
#include <math.h>

int main() {


    float kap = 1.10;
    int prisPrPakke = 734;
    float KvadratMeter;
    printf("Skriv inn antall kvadratmeter: ");
    scanf("%f", &KvadratMeter);

    double antallPakerSomTrengs = ((KvadratMeter * kap)  / 2.952);

    float totalPris = (prisPrPakke * antallPakerSomTrengs);

    if (antallPakerSomTrengs > 6.12) {
        antallPakerSomTrengs = floor(antallPakerSomTrengs + 0.5);
        printf("Det er da beregnet noe under 10%% kap\n");
    }

    printf("\nAnbefaler %2.f pakker.\n", antallPakerSomTrengs);
    printf("\nTOTAL PRIS: %.2f kr.\n", totalPris);


    return 0;
}
