#ifndef OPPGAVE_5A_STUDENT_H
#define OPPGAVE_5A_STUDENT_H

typedef struct student
{
    char fornavn[20];
    char etternavn[20];
} student_t;

void printStudent(student_t* student)
{
    printf("\n%s %s", student->fornavn, student->etternavn);
}

void studentSearch(const student_t *myClass)
{
    printf("Enter the student you are looking for: \n");
    char name[10] = {0};
    scanf("%s", name);

    for (int i = 0; i < 3; ++i) {
        if (strcmp(name, myClass[i].fornavn) == 0 || strcmp(name, myClass[i].etternavn) == 0) {
            printStudent(&myClass[i]);
        }
    }
}

#endif
