#include <stdio.h>

int gcd(int x, int y);

int
main(void)
{
    int x, y;
    printf("%s\n", "Enter two numbers:");
    scanf("%d %d", &x, &y);

    printf("GCD: %d\n", gcd(x, y));
}

int
gcd(int x, int y)
{
    printf("x: %d, y: %d\n", x, y);
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
