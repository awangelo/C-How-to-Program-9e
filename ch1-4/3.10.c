#include <stdio.h>

int
main(void)
{
    int count = 0, passou = 0, falhou = 0, n;

    while (count < 10) {
        printf("%s", "Enter the result (1 or 2): ");
        scanf("%d", &n);

        n == 1 ? passou++ : falhou++;
        count++;
    }

    printf("%d passaram", passou);
    printf("%d falharam", falhou);
    if (passou > 8)
        puts("Bonus to instructor!");
}