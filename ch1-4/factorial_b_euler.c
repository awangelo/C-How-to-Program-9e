#include <stdio.h>

int
main(void)
{
    int limit = 100, count = 1;
    long double euler = 1.0, factorial = 1.0;

    while (count < limit) {
        factorial *= count;
        euler += 1.0 / factorial;
        count++;
    }

    printf("Euler: %.10Lf\n", euler);

    return 0;
}