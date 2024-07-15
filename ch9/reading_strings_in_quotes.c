#include <stdio.h>

int
main(void)
{
    char str1[10], str2[10], str3[10];
    fgets(str1, 10, stdin);
    fgets(str2, 10, stdin);
    fgets(str3, 10, stdin);
    printf("\nstr1: %sstr2: %sstr3: %s", str1, str2, str3);
}