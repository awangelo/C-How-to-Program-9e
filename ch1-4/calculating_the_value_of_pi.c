#include <stdio.h>

int
main(void)
{
    const int limit = 99999;
    long double pi  = 4.0;
    int sign        = -1;

    for (int i = 1; i <= limit; i++) {
        long double term = 4.0 / (2 * i + 1);
        pi += sign * term;
        sign *= -1;
    }

    printf("two terms: %.2Lf\n", pi);
    printf("three terms: %.3Lf\n", pi);
    printf("four terms: %.4Lf\n", pi);
    printf("five terms: %.5Lf\n", pi);

    return 0;
}