#include <stdio.h>
#define SIZE 10

int
main(void)
{
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i)
        printf("%d  ", a[i]);

    for (size_t pass = 0; pass < SIZE - 1; pass++) {
        for (size_t i = 0; i < SIZE - 1; i++) {
            if (a[i] > a[i + 1]) {
                a[i] ^= a[i + 1];
                a[i + 1] ^= a[i];
                a[i] ^= a[i + 1];
            }
        }
    }

    puts("\nData items in ascending order");

    for (size_t i = 0; i < SIZE; i++)
        printf("%d  ", a[i]);

    puts("");
}
