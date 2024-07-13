#include <stdio.h>

int
main(void)
{
    int count = 0, factorial = 1;

    for (int i = 0; i < 6; i++) {
        count++;
        factorial *= count;
        printf("Factorial of %d is: %d\n", count, factorial);
    }

    return 0;
}