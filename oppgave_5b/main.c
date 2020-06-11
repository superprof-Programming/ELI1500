#include <stdio.h>
#include "student.h"

void vis_resultat(char x);

int main()
{
    // Debugin option
    setvbuf(stdout, NULL, _IONBF, 0);

    // Lager noen studenter
    student_t feza;
    strcpy(feza.fornavn, "Feza");
    strcpy(feza.etternavn, "kabiraba");

    // dec 6, har kun karakter F
    feza.resultater = 0x6;
    vis_resultat(feza.resultater);


    student_t amani;
    strcpy(amani.fornavn, "Amani");
    strcpy(amani.etternavn, "kabiraba");

    // Karakter D, 2 antallforsøk, godkjent prosjekt og lab
    amani.resultater = 0x7c;

    student_t tom;
    strcpy(tom.fornavn, "Tom");
    strcpy(tom.etternavn, "hansen");

    // Godkjent alt med karakter C
    tom.resultater = 0x0b;

    // Vis resultater til Tom
    vis_resultat(tom.resultater);

    return 0;
}

void vis_resultat(char x)
{
    // Godkjent projekt
    int maske_1bit = 1;

    // Eksamensførsøk
    int maske_2bit = 3;

    // Karakter
    int maske_3bit = 7;

    // Plukker  ut de tre siste bitene
    int karakter = x & maske_3bit;
    printf("Karakteren er %c \n", 'A' + karakter - 1);

    // Skyver tre bit mot høyre, bruker 1 eksamenforsøk
    x = x >> 1;

    int eksamenForsok = ( x & maske_2bit);
    printf("Antall eksamensforsork %d \n", eksamenForsok);

    // Skyver to bit mot høyre, setter prosjekt til bestått
    x = x >> 2;
    if (( x & maske_1bit) == 0)
        printf("Prosjektet er ikke bestott\n");
    else
        printf("Prosjektet er bestott\n");

    // Skyver ett bit mot høyre
    x = x >> 1;
    if (( x & maske_1bit) == 0)
        printf("Lab er ikke godkjent");
    else
        printf("Lab er godkjent");

}