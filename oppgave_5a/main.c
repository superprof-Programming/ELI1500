#include <stdio.h>
#include <string.h>
#include "student.h"

void studentSearch(const student_t *myClass);

/*
 * Faget har obligatorisk lab, og et prosjekt som vurderes som bestått/ikke bestått.
Vi antar at vi har et array stuct student minklasse[100] som inneholder data om studentene i klassen.
Lag et program som tillater læreren å søke på navn. Programmet skal lese inn en tekststreng med passende
ledetekst. Så skal navnet på alle studenter der fornavn eller etternavn inneholder denne teksten skrives ut.
Søkeord "tom" skal altså finne både "tom hansen" og "hilde tomassen".
(vi bruker bare lowercase)
Tips: Her skal du vise at du kan håndtere struct, og at du kan søke etter en streng i en annen. Hvis du kan bare
en av delene, lag et eksempel der du får vist det
 */

int main()
{
    // Debugin option
    setvbuf(stdout, NULL, _IONBF, 0);
    // Start by creating some students
    student_t feze;
    strcpy(feze.fornavn, "feze");
    strcpy(feze.etternavn, "kabiraba");

    student_t amani;
    strcpy(amani.fornavn, "amani");
    strcpy(amani.etternavn, "kabiraba");

    student_t tom;
    strcpy(tom.fornavn, "tom");
    strcpy(tom.fornavn, "hansen");

    // Add students to my class list
    student_t myClass[100];
    myClass[0] = feze;
    myClass[1] = tom;
    myClass[2] = amani;

    studentSearch(myClass);


    return 0;
}
