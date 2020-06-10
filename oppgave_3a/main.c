#include <stdio.h>

int like(int x, int y, int z);

int main() {

    printf("%d\n", like(3, 3, 3));
    printf("%d\n", like(2,3, 2));
    printf("%d\n", like(2,3, 4));

    return 0;
}

int like(int x, int y, int z){
    if (x == y && y == z)
        return 2;

    if (x == y || x == z)
        return 1;

    return 0;
}