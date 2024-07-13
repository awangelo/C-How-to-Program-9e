#include <ctype.h>
#include <stdio.h>

int
test_palindrome_helper(char str[], int start, int end)
{
    if (start >= end)
        return 1;

    if (!isalpha(str[start]))
        return test_palindrome_helper(str, start + 1, end);
    if (!isalpha(str[end]))
        return test_palindrome_helper(str, start, end - 1);

    if (tolower(str[start]) == tolower(str[end]))
        return test_palindrome_helper(str, start + 1, end - 1);
    else
        return 0;
}

int
test_palindrome(char str[], size_t count)
{
    return test_palindrome_helper(str, 0, count - 1);
}

int
main()
{
    char str[30] = "radar";

    if (test_palindrome(str, sizeof(str) / sizeof(str[0]) - 1))
        printf("É um palíndromo\n");
    else
        printf("Não é um palíndromo\n");

    return 0;
}
