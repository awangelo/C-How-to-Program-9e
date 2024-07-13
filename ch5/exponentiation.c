#include <stdio.h>
#include <time.h>

int integer_power(int base, int expo);

int
main(void)
{
    int base, expo;
    puts("Enter a base and an exponent: ");
    scanf("%d %d", &base, &expo);

    printf("%d to the power of %d is %d\n", base, expo, integer_power(base, expo));
}

int
integer_power(int base, int expo)
{
    int result = 1;
    for (int i = 1; i <= expo; i++)
        result *= base;

    return result;
}