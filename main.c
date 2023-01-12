#include <stdio.h>
#include <stdlib.h>

int main() {
    // create a dynamic array of 5 integers
    int *numbers = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        numbers[i] = i * 2;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // increase size of the array to 10 integers
    numbers = (int *) realloc(numbers, 10 * sizeof(int));

    for (int i = 5; i < 10; i++) {
        numbers[i] = i * 2;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // free memory allocated for the array
    free(numbers);
    return 0;
}



