#include <stdio.h>

int multiple(int num);

int
main(void)
{
    int y;
    puts("Enter an integer between 1 and 32000: ");
    scanf("%d", &y);

    if (multiple(y))
        printf("%d is a multiple of X\n", y);
    else
        printf("%d is not a multiple of X\n", y);
}

int
multiple(int num)
{
    int mask = 1;
    int mult = 1; //   2^10 = 1024
    for (int i = 1; i <= 10; ++i, mask <<= 1) {
        // Se qualquer bit ate 10 for 1, entao nao e multiplo (1024 = 100000...)
        if ((num & mask) != 0) {
            mult = 0; // Retorna 0 ja que nao eh
            break;
        }
    }
    return mult;
}