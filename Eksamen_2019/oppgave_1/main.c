#include <stdio.h>
#include <math.h>

int main() {

    float kap = 0.10;
    int prisPrPakke = 734;
    float AntallKvadratMeterPrGulv;
    printf("Skriv inn antall kvadratmeter: ");
    scanf("%f", &AntallKvadratMeterPrGulv);


    // Beregner pris per pakke
    float TiprosentOkning = prisPrPakke * kap;

    int antallPakerSomTrengs = floor(AntallKvadratMeterPrGulv / 2952);

    float totalPris = (prisPrPakke * antallPakerSomTrengs) + TiprosentOkning;

    printf("Det er beregnet under 10% kapp");
    printf("\nAnbefaler %d pakka", antallPakerSomTrengs);
    printf("\nTOTAL PRIS: %.2f", totalPris);

    return 0;
}
