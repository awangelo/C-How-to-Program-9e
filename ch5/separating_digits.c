#include <stdio.h>

void separate(int n);

int
main(void)
{
    int n;
    printf("%s", "Enter one integer: ");
    scanf("%d", &n);

    separate(n);
}

void
separate(int n)
{
    if (n < 10) {
        printf("%d ", n);
        return;
    }

    separate(n / 10);
    printf("%d ", n % 10);
    puts("");
}