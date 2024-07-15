#include <ctype.h>
#include <stdio.h>
#include <string.h>

int
main()
{
    char sentence[200];
    puts("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strlen(sentence) - 1] = '\0';

    printf("%s", "Enter a character to search for: ");
    char ch = getchar();

    int count = 0;
    char *ptr = sentence;
    while ((ptr = strchr(ptr, ch)) != NULL) {
        count++;
        ptr++;
    }

    printf("The character '%c' occurs %d times.\n", ch, count);
}