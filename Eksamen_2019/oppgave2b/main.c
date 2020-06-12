#include <stdio.h>

int main() {
    int Oslo2020[54], Viken2020[54], Vestland2020[54];

    for (int i = 0; i < 54; ++i) {
        Oslo2020[0] += Oslo2020[i];
    }
    printf("Totalt antall smittet i OSLO: %i", Oslo2020[0]);
    
    return 0;
}