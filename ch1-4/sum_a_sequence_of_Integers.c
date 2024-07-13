#include <stdio.h>

int
main(void)
{
    int n, limit, total = 0;

    printf("%s", "# of values: ");
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++) {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &n);
        total += n;
    }

    printf("The total is %d\n", total);

    return 0;
}