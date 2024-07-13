#include <stdio.h>

int
main()
{
    char format[] = "%c";
    char ch       = '?';

    if (printf(format, ch) > 0) {
        printf("\bThe question mark '?' can be printed as a literal character.\n");
    } else {
        printf("\bThe question mark '?' cannot be printed as a literal character.\n");
    }

    return 0;
}