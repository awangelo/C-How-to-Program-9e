#include <stdio.h>

int
main(void)
{
    int num;
    int factorial = 1;
    printf("%s", "Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        factorial *= num;
        num--;
    }

    printf("Factorial: %d\n", factorial);

    return 0;
}