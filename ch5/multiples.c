#include <stdio.h>

int multiple(int n1, int n2);

int
main(void)
{
    int n1, n2;
    puts("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    printf("%d is a multiple of %d? %d\n", n1, n2, multiple(n1, n2));
}

int
multiple(int n1, int n2)
{
    if (n2 % n1 == 0) {
        return 1;
    }
    return 0;
}