#include <stdio.h>
#include <string.h>

typedef struct produksjon{
    char dato[8];
    int smittevern;
    int munnbind;
} produksjon_t;


int main() {
    // Debug options
    setvbuf(stdout, NULL, _IONBF, 0);

    produksjon_t produksjonData[4];

    FILE *produksjonFILE;

    // Åpner for å lese
    produksjonFILE = fopen("produksjon.txt", "r");
    if (produksjonFILE == NULL)
        printf("Kan ikke åpne filen");

    int sumFraker = 0;
    int sumMunbind = 0;
    while(!feof(produksjonFILE))
    {
        produksjon_t data;
        fscanf(produksjonFILE, "%s %d %d", data.dato, &data.smittevern, &data.munnbind);
        sumFraker += data.smittevern;
        sumMunbind += data.munnbind;
    }

    printf("\nSumm Fraker: %i", sumFraker);
    printf("\nSumm Munbind: %i", sumMunbind);

    fclose(produksjonFILE);

    return 0;
}
