#include <stdio.h>

int is_even(int n);

int
main(void)
{
    int n;
    printf("%s", "Enter one integer: ");
    scanf("%d", &n);

    printf("%d is even? %d\n", n, is_even(n));
}

int
is_even(int n)
{
    return (n % 2 == 0);
}