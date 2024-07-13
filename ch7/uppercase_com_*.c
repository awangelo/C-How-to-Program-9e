#include <ctype.h>
#include <stdio.h>

void convertToUppercase(char *sPtr);

int
main(void)
{
    char string[] = "cHaRaCters and $32.98";
    printf("The string before conversion is: %s\n", string);
    convertToUppercase(string);
    printf("The string after conversion is: %s\n", string);
}

void
convertToUppercase(char *sPtr)
{
    while (*sPtr != '\0') {
        *sPtr = toupper(*sPtr);
        ++sPtr;
    }
}