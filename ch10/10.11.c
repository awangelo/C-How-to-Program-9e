#include <stdio.h>

unsigned int
power2(unsigned int number, unsigned int pow)
{
    return number << pow;
}

int
main()
{
    unsigned int number = 0b00000101;
    unsigned int pow    = 4;

    printf("Original number: %u\n", number);
    printf("Bits before shifting: ");
    printf("%b\n", number);

    unsigned int shifted = power2(number, pow);

    printf("Number after left shift by %u bits: %u\n", pow, shifted);
    printf("Bits after shifting: ");
    printf("%b\n", shifted);
}
