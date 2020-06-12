#include <stdio.h>

float dybde(float tid){
    int lydhastigheten = 1500;
    float dypden = (lydhastigheten * tid)/2;

    return dypden;
}

int main() {

    printf("%.2f", dybde(2.0));
    
    return 0;
}
