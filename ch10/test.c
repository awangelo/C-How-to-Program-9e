#include <stdio.h>
#include <stdlib.h>

#define TAM 2

typedef struct cadastro {
    char nome[30];
    int idade;
} Cad;

int
main()
{
    Cad dados[TAM];
    Cad *vet = (Cad *)calloc(TAM, sizeof(Cad));

    for (int i = 0; i < TAM; i++) {
        printf("NOME:");
        scanf("%s", vet->nome);
        printf("IDADE:");
        scanf("%d", &vet->idade);
    }

    for (int i = 0; i < TAM; i++) {
        printf("NOME: %s", dados[i].nome);
        printf("IDADE: %d", dados[i].idade);
    }

    return 0;
}