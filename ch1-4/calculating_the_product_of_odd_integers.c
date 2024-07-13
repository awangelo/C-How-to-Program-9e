#include <stdio.h>

int
main(void)
{
    int product = 1;
    for (int i = 1; i <= 15; i += 2) {
        printf("%d\n", i);
        product *= i;
    }
    printf("The product of odd integers from 1 to 15 is %d\n", product);

    return 0;
}