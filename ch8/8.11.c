#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void
new_sentence(char *article, char *noun, char *verb, char *prepo)
{
    char sentence[50];
    sprintf(sentence, "%s %s %s %s %s %s", article, noun, verb, prepo, article, noun);
    sentence[0] = toupper(sentence[0]);
    strcat(sentence, ".");
    printf("%s\n", sentence);
}

int
main()
{
    char article[5][10] = { "the", "a", "one", "some", "any" };
    char noun[5][10]    = { "boy", "girl", "dog", "town", "car" };
    char verb[5][10]    = { "drove", "jumped", "ran", "walked", "skipped" };
    char prepo[5][10]   = { "to", "from", "over", "under", "on" };
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
        new_sentence(article[rand() % 5], noun[rand() % 5], verb[rand() % 5], prepo[rand() % 5]);
}