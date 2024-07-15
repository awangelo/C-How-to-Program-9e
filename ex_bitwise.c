#include <stdio.h>

int
main()
{
    int x = 6;  //  6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  //  0 = 00000000

    z = x & y;
    printf("AND = %d\n", z);
    z = x | y;
    printf("OR = %d\n", z);
    z = x ^ y;
    printf("XOR = %d\n", z);

    z = x << 2;
    printf("SHIFT LEFT = %d\n", z);
    z = x >> 2;
    printf("SHIFT RIGHT = %d\n", z);

    char n = 12;
    printf("\nn = %d, %b\n", n, n);
    printf("~n = %d, %b\n", ~n, ~n);

    return 0;
}