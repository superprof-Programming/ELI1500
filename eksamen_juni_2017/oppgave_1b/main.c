/*
    Fornøyelsesparken har et lotteri på inngangsbilletten. Vinnersjansen skal være en av tusen.
    Ledelsen bestemmer seg for at lotteriet bare skal gjelde grupper med minst ett barn, og
    gruppen må være under ti personer. Trekk et tilfeldig tall for hver gruppe som oppfyller
    kravene, og skriv ut om gruppen har vunnet.
    Du trenger bare skrive de programsetningene som kommer i tillegg til programmet i 1a

 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int antallVokne, antallBarn;
    printf("Antall voksne: ");
    scanf("%d", &antallVokne);

    printf("Antall antall barn: ");
    scanf("%d", &antallBarn);


    int antallPersoner = antallVokne + antallBarn;
    int voknesPris = antallVokne * 350;
    int barnePris = antallBarn * 250;

    int totalPris = voknesPris + barnePris;
    double rabat = 0.0;

    if (antallPersoner >= 8)
        rabat = (voknesPris + barnePris) * 0.10;

    printf("\nPrist for voksne: %d", voknesPris);
    printf("\nPrist for barn:   %d", barnePris);
    printf("\nRabat:            %.2f", rabat);
    printf("\nTATAL PRIS:       %.2f", totalPris - rabat);

    // Tilføedig tall mellom 0 og 99
    int tilfeldigTall = rand() % 100;
    int vinneKrav = antallBarn >= 1 && antallPersoner <= 10;

    if ( vinneKrav && (tilfeldigTall >= 49))
       printf("Dere har vunnet!");



    return 0;
}
