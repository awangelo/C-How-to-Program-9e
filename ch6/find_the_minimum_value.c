#include <stdio.h>

#define SIZE 10

int recursive_minimum(int arrayzinho[], int size);

int
main()
{
    int arrayzinho[SIZE] = { 9, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printf("The minimum value is: %d\n", recursive_minimum(arrayzinho, SIZE));

    return 0;
}

int
recursive_minimum(int arrayzinho[], int size)
{
    if (size == 1)
        return arrayzinho[0];

    int min = recursive_minimum(arrayzinho, size - 1);
    return arrayzinho[size - 1] < min ? arrayzinho[size - 1] : min;
}