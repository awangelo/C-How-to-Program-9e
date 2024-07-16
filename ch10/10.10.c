#include <stdio.h>

int
main()
{
    unsigned int number = 0b10011101;

    printf("Original number: %u\n", number);
    printf("%s", "Bits before shifting: ");
    printf("%b\n", number);

    unsigned int shifted = number >> 4;

    printf("Number after right shift by 4 bits: %u\n", shifted);
    printf("Bits after shifting: ");
    printf("%b\n", shifted);
}
