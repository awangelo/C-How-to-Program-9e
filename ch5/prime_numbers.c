#include <math.h>
#include <stdio.h>

int reverse(int n);

int
main(void)
{
    for (int i = 2; i < 100; i++)
        if (reverse(i))
            printf("%d\n", i);
}

int
reverse(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i <= (int)sqrt(n) + 1; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}