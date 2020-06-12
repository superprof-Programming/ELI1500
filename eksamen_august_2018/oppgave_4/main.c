/*
    Fila "jenter2017.txt" inneholder de 10 vanligste jentenavnene i 2017, og hvor mange jenter som fikk dette
    navnet (se figur). Fila "gutter2017.txt "inneholder de 10 vanligste guttenavnene i 2017, og hvor mange gutter
    som fikk dette navnet (se figur).
    Lag et program som lager fila "barn2017.txt", som inneholder de 10 vanligste navnene i 2017, og hvor mange
    barn som har fått dette navnet. Programmet skal naturligvis bruke data fra filene, ikke fra illustrasjonen.
 */
#include <stdio.h>

int main() {
    // Debug options
    setvbuf(stdout, NULL, _IONBF, 0);

    FILE *jenteFil;
    FILE *gutteFil;
    FILE *barneFil;

    jenteFil = fopen("jenter2017.txt", "r");
    gutteFil = fopen("gutter2017.txt", "r");
    barneFil = fopen("barn2017.txt", "w");

    if (jenteFil == NULL)printf("problem med jenteFil");
    if (gutteFil == NULL)printf("problem med gutteFil");
    if (barneFil == NULL)printf("problem med barneFil");

    // Antar at det ikke finnes et navn med mer en 16 tegn
    char jenteNavn[16] = {0}, gutteNavn[16] = {0};
    int antallJenter = 0, antallGuter = 0;

    // Leser inn mest populære jenteNavn og gutteNavn
    fscanf(jenteFil, "%s%d", jenteNavn, &antallJenter);
    fscanf(gutteFil, "%s%d", gutteNavn, &antallGuter);

    // Vi leser kun 10 navn, 5 av de best popularer fra jenter og 5 fra gutter.
    for (int i = 0; i < 5; ++i) {
        // Skriver til fil og leser et nytt navn
        fprintf(barneFil, "%30s%10d\n", jenteNavn, antallJenter);
        fprintf(barneFil, "%30s%10d\n", gutteNavn, antallGuter);
    }

    fclose(jenteFil);
    fclose(gutteFil);
    fclose(barneFil);

    return 0;
}