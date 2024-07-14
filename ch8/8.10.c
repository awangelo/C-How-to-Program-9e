#include <stdio.h>
#include <string.h>

int
main()
{
    char str1[50], str2[50];
    int n, cmp;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    printf("Enter the number of chars to compare: ");
    scanf("%d", &n);

    cmp = strncmp(str1, str2, n);

    if (cmp == 0) {
        printf("The first %d chars are equal.\n", n);
    } else if (cmp < 0) {
        printf("The first %d chars of the first string are less than the second string.\n", n);
    } else {
        printf("The first %d chars of the first string are greater than the second string.\n", n);
    }

    return 0;
}