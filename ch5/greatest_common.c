#include <stdio.h>

int gcd(int n1, int n2);

int
main(void)
{
    int n1, n2;
    printf("%s\n", "Enter two numbers:");
    scanf("%d %d", &n1, &n2);

    printf("GCD: %d\n", gcd(n1, n2));
}

int
gcd(int n1, int n2)
{
    int gcd, max;
    max = n1;
    if (n2 > max)
        max = n2;

    for (int i = 1; i <= max; i++) {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    return gcd;
}
