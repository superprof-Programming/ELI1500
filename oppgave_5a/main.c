#include <stdio.h>
#include <string.h>
#include "student.h"

void studentSearch(const student_t *myClass);

int main()
{
    // Debugin option
    setvbuf(stdout, NULL, _IONBF, 0);

    // Start by creating some students
    student_t feze;
    strcpy(feze.fornavn, "feza");
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
