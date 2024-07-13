#include <stdio.h>

int reverse(int n);

int
main(void)
{
    for (int i = 1; i < 99999; i++)
        if (reverse(i))
            printf("%d\n", i);
}

int
reverse(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}