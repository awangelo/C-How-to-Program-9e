#include <stdio.h>
#include <stdlib.h>

int
main()
{
    int values[5] = { 2, 4, 6, 8, 10 };
    int *vPrt     = NULL;

    for (int i = 0; i < 5; i++)
        printf("%d ", values[i]);
    puts("");

    vPrt = values;
    vPrt = &values[0];

    for (size_t i = 0; i < 5; i++)
        printf("%d ", *(vPrt + i));
    puts("");

    for (size_t i = 0; i < 5; i++)
        printf("%d ", *(values + i));
    puts("");

    for (size_t i = 0; i < 5; i++)
        printf("%d ", vPrt[i]);

    //...

    puts("");
}