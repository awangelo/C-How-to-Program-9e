#include <ctype.h>
#include <stdio.h>
#include <string.h>

int
main()
{
    char sentence[200];
    char search[100];
    puts("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strlen(sentence) - 1] = '\0';

    printf("%s", "Enter a string to search for: ");
    fgets(search, sizeof(search), stdin);
    search[strlen(search) - 1] = '\0';

    int count = 0;
    char *ptr = sentence;

    while ((ptr = strstr(ptr, search)) != NULL) {
        count++;
        ptr += strlen(search); // New star
    }

    printf("The string '%s' occurs %d times.\n", search, count);
}