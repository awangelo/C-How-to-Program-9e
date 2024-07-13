#include <stdio.h>

int
main(void)
{
    puts("Decimal\tOctal\tHexadecimal");
    for (int i = 1; i < 256; i++) {
        printf("%d\t%o\t%x\n", i, i, i);
    }

    return 0;
}