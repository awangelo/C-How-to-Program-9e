#include <stdio.h>

int
main(void)
{
    const int limit = 500;
    int a, b, c;

    for (a = 1; a <= limit; a++)
        for (b = a; b <= limit; b++)
            for (c = b; c <= limit; c++)
                if (a * a + b * b == c * c)
                    printf("%4d, %4d, %4d\n", a, b, c);

    return 0;
}