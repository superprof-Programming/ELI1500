#include <stdio.h>
/*
 * Lag en funksjon "like" som har tre heltall som parametre int like(int x, int y, int z). Funksjonen
 * skal returnere 2 hvis alle tallene x,y og z er like. Funksjonen skal returnere 1 hvis to av tallene
 * er like. Funksjonen skal returnere 0 hvis ingen av tallene er like.
 *  Eksempel: like (3,3,3) returnerer 2, like(2,3,2) returnerer 1, like(2,3,4) returnerer 0.
 */

int like(int x, int y, int z){
    if (x == y && y == z)
        return 2;

    if (x == y || x == z)
        return 1;

    return 0;
}

int main() {

    printf("%d\n", like(3, 3, 3));
    printf("%d\n", like(2,3, 2));
    printf("%d\n", like(2,3, 4));

    return 0;
}
