#include <stdio.h>
#include <stdlib.h>

int
main()
{
    long int value1 = 200000;
    long int value2;

    long *lPtr = NULL;

    lPtr = &value1;

    printf("%ld\n", *lPtr);

    value2 = *lPtr;

    printf("%ld\n", value2);

    printf("addr1: %p\n", &value1);
    printf("addr lPtr: %p\n", lPtr);
}