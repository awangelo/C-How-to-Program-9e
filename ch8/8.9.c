#include <stdio.h>
#include <string.h>

int
main()
{
    char str1[10], str2[10];
    int cmp;

    puts("Enter two strings to compare: ");
    fgets(str1, 10, stdin);
    fgets(str2, 10, stdin);

    cmp = strcmp(str1, str2);

    if (cmp == 0)
        puts("\nThe strings are equal.");
    else if (cmp < 0)
        printf("\nThe first string is less than the second: %d\n", cmp);
    else
        printf("\nThe first string is greater than the second: %d\n", cmp);
}