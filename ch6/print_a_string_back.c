#include <stdio.h>
#include <string.h>
#define SIZE 15

void
string_reverse(char string[]);

int
main(void)
{
    char string[SIZE] = "oie";
    printf("The string is: %s\n", string);
    puts("The string reversed is:");
    string_reverse(string);
    puts("");
}

void
string_reverse(char string[])
{
    if (string[0] == '\0')
        return;

    // Chama a funcao recursivamente com a string a partir do proximo caractere
    string_reverse(&string[1]);
    // Espera no call stack ate que a funcao acima retorne
    putchar(string[0]);
}
