#include <stdio.h>

#define SIZE 80

size_t mystery2(const char *s);

int
main(void)
{
    char string[SIZE];
    puts("Enter a string: ");
    scanf("%79s", string);

    printf("%zu\n", mystery2(string));
}

// What does this function do?
// mede o tamanho da string
size_t
mystery2(const char *s)
{
    size_t x;
    // loop through string
    for (x = 0; *s != '\0'; ++s) {
        ++x;
    }
    return x;
}