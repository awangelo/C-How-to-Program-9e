#include <limits.h>
#include <stdio.h>

int
main(void)
{
    int n, remaining, smallest = INT_MAX;

    printf("%s", "# of values to test: ");
    scanf("%d", &remaining);

    for (int i = remaining; i > 0; i--) {
        scanf("%d", &n);
        if (n < smallest)
            smallest = n;
    }

    printf("The smallest value is %d\n", smallest);

    return 0;
}