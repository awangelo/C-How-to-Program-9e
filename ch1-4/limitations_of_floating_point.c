#include <stdio.h>

int
main(void)
{
    float amount = 1000000.00f;
    amount += 0.12f;

    printf("%.2f\n", amount);

    return 0;
}