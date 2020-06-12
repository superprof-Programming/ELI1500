#include <stdio.h>

int main() {
    int Oslo2020[54], Viken2020[54], Vestland2020[54];

    for (int i = 0; i < 54; ++i) {
        if (Viken2020[i] == 0) {
            printf("Første smitte i uke %i", i);
        }
    }
    return 0;
}
