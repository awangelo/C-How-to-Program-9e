#include <stdio.h>

union {
    char c;
    short s;
    int i;
    long b;
} integer;

int
main()
{
    puts("Enter a character, integer, short, and long:");
    integer.c = getchar();
    scanf(" %d", &integer.i);
    scanf(" %hd", &integer.s);
    scanf(" %ld", &integer.b);

    printf("Character: %c\n", integer.c);
    printf("Integer: %d\n", integer.i);
    printf("Short: %hd\n", integer.s);
    printf("Long: %ld\n", integer.b);
}