/*
    Inngangsbilletten til en fornøyelsespark koster 250 kr for barn og 350 kr for voksne. Grupper
    på 8 eller flere personer får 10% rabatt.
    Lag et program som leser inn antall voksne og antall barn med passende ledetekst, og
    skriver ut prisen på billettene.
 */
#include <stdio.h>


int main() {
    int antallVokne, antallBarn;
    printf("Antall voksne: ");
    scanf("%d", &antallVokne);
    getchar(); // Fjener siste \n

    printf("Antall antall barn: ");
    scanf("%d", &antallBarn);
    getchar();


    int antallPersoner = antallVokne + antallBarn;
    int voknesPris = antallVokne * 350;
    int barnePris = antallBarn * 250;

    int totalPris = voknesPris + barnePris;
    double rabat = 0.0;

    if (antallPersoner >= 8)
        rabat = (voknesPris + barnePris) * 0.10;

    printf("\nPrist for voksne: %d", voknesPris);
    printf("\nPrist for barn:   %d", barnePris);
    printf("\nRabot:            %.2f", rabat);
    printf("\nTATAL PRIS:       %.2f", totalPris - rabat);

    return 0;
}
