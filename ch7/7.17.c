#include <stdio.h>

#define SIZE 80

void mystery1(char *s1, const char *s2);

int
main(void)
{
    char string1[SIZE];
    char string2[SIZE];
    puts("Enter two strings: ");
    scanf("%39s%39s", string1, string2);

    mystery1(string1, string2);

    printf("%s\n", string1);
    printf("%s\n", string2);
}

// What does this function do?
void
mystery1(char *s1, const char *s2)
{
    // vai ate o final da string 1
    while (*s1 != '\0')
        ++s1;
    // copia a string 2 para a 1
    for (; *s1 = *s2; ++s1, ++s2) {
        ;
    }
}