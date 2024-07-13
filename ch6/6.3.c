#include <stdio.h>

#define SIZE 10

int
main()
{
    double array[SIZE] = { 0.0 };

    printf("%f", array[4]);

    array[9] = 1.667;
    array[7] = 3.333;

    printf("\n%.2f", array[9]);
    printf("\n%.2f", array[7]);

    for (size_t i = 0; i < SIZE; i++) {
        printf("\n%.2f", array[i]);
    }
}