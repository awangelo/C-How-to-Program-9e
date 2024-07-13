#include <stdio.h>

int
main(void)
{
    char str[] = "ola alice";
    char *s    = "ola alice";
    printf("%s\n", str);
    printf("%s\n", s);

    str[9] = '!';
    // This line will cause a segmentation fault (read-only memory)
    // s[7] = '!';

    printf("%s\n", str);
    // printf("%s\n", s);
}
