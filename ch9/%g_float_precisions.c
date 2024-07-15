#include <stdio.h>
#include <stdlib.h>

int
main()
{
    for (int i = 1; i <= 9; i++)
        printf("%.*g\n", i, 9876.12345);
}