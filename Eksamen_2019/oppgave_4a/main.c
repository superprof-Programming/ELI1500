#include <stdio.h>
#include <string.h>

typedef struct produksjon{
    char dato[8];
    int smittevern;
    int munnbind;
} produksjon_t;

void lessInnData(produksjon_t produksjonData[]){
    FILE *produksjonFILE;

    // Åpner for å lese
    produksjonFILE = fopen("produksjon.txt", "r");
    if (produksjonFILE == NULL)
        printf("Kan ikke åpne filen");

    int index = 0;
    while(!feof(produksjonFILE))
    {
        produksjon_t data;
        fscanf(produksjonFILE, "%s %d %d", data.dato, &data.smittevern, &data.munnbind);

        data.dato[strlen(data.dato) - 1] = 0; // fjerner \n på slutten av treng
        produksjonData[index] = data;
        index++;
    }
    fclose(produksjonFILE);
}
int main() {
    // Debug options
    setvbuf(stdout, NULL, _IONBF, 0);

    produksjon_t produksjonData[4];
    lessInnData(produksjonData);

    char sokeOrd[8];
    printf("Oppgi en soke dato: ");
    scanf("%s", sokeOrd);

    int funnet = 0;
    for (int i = 0; i < 3; ++i) {
        if (strstr(sokeOrd, produksjonData[i].dato) > 0) {
            funnet = 1;
            printf("Dato: %s, antall frakker %i, antall munnbind %i",
                    produksjonData[i].dato, produksjonData[i].smittevern, produksjonData[i].munnbind);
        }
    }

    if (!funnet)
        printf("Fant ingen resultat.");


    return 0;
}
