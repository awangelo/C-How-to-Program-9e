#include <stdio.h>

int
main(void)
{
    int sum = 0;
    for (int i = 2; i <= 30; i += 2) {
        printf("%d\n", i);
        sum += i;
    }
    printf("The sum of even integers from 2 to 30 is %d\n", sum);

    return 0;
}