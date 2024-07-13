#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip();

int
main(void)
{
    srand(time(NULL));
    int heads = 0;
    int tails = 0;

    for (int i = 0; i < 100; i++) {
        if (flip() == 0)
            tails++;
        else
            heads++;
    }

    printf("Heads: %d\n", heads);
    printf("Tails: %d\n", tails);
}

int
flip()
{
    // srand(time(NULL)); Se for chamado aqui, a funcao ira gerar a mesma seed pois o time usa segundos
    return rand() % 2;
}