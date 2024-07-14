#include <stdio.h>
#include <stdlib.h>

int
main()
{
    char str1[10], str2[10], str3[10], str4[10];
    puts("Enter three four strings representing floats: ");
    str1[strcspn(str1, "\n")] = 0;
    fgets(str2, 10, stdin);
    str2[strcspn(str2, "\n")] = 0;
    fgets(str3, 10, stdin);
    str3[strcspn(str3, "\n")] = 0;
    fgets(str4, 10, stdin);
    str4[strcspn(str4, "\n")] = 0;

    puts("Integers: ");
    printf("%f\n", atof(str1));
    printf("%f\n", atof(str2));
    printf("%f\n", atof(str3));
    printf("%f\n", atof(str4));
}