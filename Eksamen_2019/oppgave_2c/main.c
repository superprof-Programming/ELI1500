#include <stdio.h>

int main() {
    int Oslo2020[54], Viken2020[54], Vestland2020[54];

    int hoySmitteOslo = Oslo2020[0], OsloUke = 0;
    int hoySmitteViken = Viken2020[0], vikeUke = 0;
    int hoySmitteVestland = Vestland2020[0], VestLandUke = 0;

    for (int i = 0; i < 54; ++i) {
        if (hoySmitteOslo > Oslo2020[i]) {
            hoySmitteOslo = Oslo2020[i];
            OsloUke = i;
        }

        if (hoySmitteViken > Viken2020[i]) {
            hoySmitteViken = Viken2020[i];
            vikeUke = i;
        }

        if (hoySmitteVestland > Vestland2020[i]) {
            hoySmitteVestland = Vestland2020[i];
            VestLandUke = i;
        }

    }

    printf("Første smitte i ukenr %i hadde oslo sitt hoyest på %i", OsloUke,hoySmitteOslo);
    printf("Første smitte i uke %i hadde Viken sitt hoyest på %i", vikeUke, hoySmitteViken);
    printf("Første smitte i uke %i hadde Vestland sitt hoyest på %i", VestLandUke, hoySmitteVestland);

    return 0;
}