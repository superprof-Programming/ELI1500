#ifndef OPPGAVE_5A_STUDENT_H
#define OPPGAVE_5A_STUDENT_H

#include <stdio.h>
#include <string.h>

typedef struct student
{
    char fornavn[20];
    char etternavn[20];
    unsigned char resultater;
} student_t;

#endif