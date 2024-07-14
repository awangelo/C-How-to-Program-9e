#include <ctype.h>
#include <stdio.h>

int
main()
{
    char ch;
    printf("%s", "Enter a character: ");
    scanf("%1c", &ch);

    printf("Character entered: %c\n", ch);
    puts("Return != 0 means char c falls into the tested class");

    printf("isalnum: %d\n", isalnum(ch));
    printf("isalpha: %d\n", isalpha(ch));
    printf("iscntrl: %d\n", iscntrl(ch));
    printf("isdigit: %d\n", isdigit(ch));
    printf("isgraph: %d\n", isgraph(ch));
    printf("islower: %d\n", islower(ch));
    printf("isprint: %d\n", isprint(ch));
    printf("ispunct: %d\n", ispunct(ch));
    printf("isspace: %d\n", isspace(ch));
    printf("isupper: %d\n", isupper(ch));
    printf("isxdigit: %d\n", isxdigit(ch));

    printf("tolower: %c\n", tolower(ch));
    printf("toupper: %c\n", toupper(ch));

    return 0;
}