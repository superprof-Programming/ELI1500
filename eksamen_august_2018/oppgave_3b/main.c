#include <stdio.h>

int like(int *numbers);
int main() {

    int *numbers;
    printf("Enter some integers: ");
    for (int i = 0; i < 3; ++i)
        scanf("%d", &numbers[i]);


    printf("Enter %i numbers that are a like.", like(numbers));

    return 0;
}

int like(int *numbers){
    if (numbers[0] == numbers[1] && numbers[0] == numbers[2])
        return 3;

    if (numbers[0] == numbers[1] || numbers[0] == numbers[2] || numbers[1] == numbers[2])
        return 2;

    return 0;
}
