#include <ctype.h>
#include <stdio.h>

void convertToUppercase(char str[]);

int
main(void)
{
    char string[] = "cHaRaCters and $32.98";
    printf("The string before conversion is: %s\n", string);
    convertToUppercase(string);
    printf("The string after conversion is: %s\n", string);
}

void
convertToUppercase(char str[])
{
    while (str[0] != '\0') {
        str[0] = toupper(str[0]);
        ++str; // Soma um = andar para o proximo caractere
    }
}