#include <stdio.h>

int
main(void)
{
    int n, total = 0;

    while (1) {
        printf("%s", "Enter a sequence of integers (9999 to exit): ");
        scanf("%d", &n);
        if (n == 9999)
            break;
        total += n;
    }
    printf("The total is %d\n", total);

    return 0;
}