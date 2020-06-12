/*
    Vi har en bedrift som registrerer sykefraværet hos de ansatte. De innførte «åpent
    kontorlandskap» i 2008, og er interessert i om dette har påvirket sykefraværet.

    Anta at vi har et array float sykefravar[16], der indeks 0 inneholder sykefravær for år 2000,
    indeks 1 sykefravær for 2001 osv.
    Lag et program som skriver ut
        a. hvilket år sykefraværet var lavest, og hva sykefraværet var dette året
        b. hvor mange år sykefraværet har vært over 4.5%
        c. gjennomsnitt for årene 2000-2007, og gjennomsnitt for årene 2008-20015.
 */
#include <stdio.h>

int main() {
    float sykefravar[16];

    float lavestSykefravar = sykefravar[0];
    float hoyhestSykefravar = sykefravar[0];

    for (int i = 0; i < 16; ++i) {

        // År med lavest sykefraværet
        if (sykefravar[i] < lavestSykefravar)
            lavestSykefravar = sykefravar[i];

        // År med høyest sykefraværet
        if (sykefravar[i] > hoyhestSykefravar)
            hoyhestSykefravar = sykefravar[i];

    }

    printf("Lavest sykefrøvar: %.2f", lavestSykefravar);
    printf("Høyest sykefrøvar: %.2f", hoyhestSykefravar);

    float gjennomsnitt = (sykefravar[0] + sykefravar[15])/2;
    printf("Gjennomsnitt fra 2017 til 2007 er %.2f", gjennomsnitt);

    return 0;
}
