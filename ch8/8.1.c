#include <ctype.h>
#include <stdio.h>
#include <string.h>

int
main(void)
{
    char c;
    int x, y, z;
    double d, e, f;
    char *ptr;
    char s1[100];
    char s2[100];

    c = toupper(c);

    printf("%s digit", isdigit(c) ? "is a" : "is not a");

    printf("%s control", iscntrl(c) ? "is a" : "is not a");

    fgets(s1, 100, stdin);

    puts(s1);

    putchar(c);

    printf("%s control", isalpha(c) ? "is a" : "is not a");
}