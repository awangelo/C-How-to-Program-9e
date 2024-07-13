#include <stdio.h>

#define ARRAY_SIZE 4

int
main(void)
{
    int b[]   = { 10, 20, 30, 40 };
    int *bPtr = b;

    printf("*(b + 2):%7d\n", *(b + 2));
    printf("*(bPtr + 2):%4d\n", *(bPtr + 2));
    printf("bPtr[2]:%8d\n", bPtr[2]);
    printf("b[2]:%11d\n", b[2]);
}