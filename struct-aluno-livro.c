#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 100

typedef struct {
    char titulo[BUFFER_SIZE];
    unsigned int paginas;
    float preco;
} Livro;

Livro *create_livro(const char *titulo, unsigned int paginas, float preco);
void delete_livro(Livro *livro);
void print_livro(Livro *livro);

int
main()
{
    printf("%s", "Digite o titulo do livro: ");
    char titulo[BUFFER_SIZE];
    fgets(titulo, BUFFER_SIZE, stdin);
    titulo[strcspn(titulo, "\n")] = '\0';
    printf("%s", "Digite o numero de paginas: ");
    unsigned int paginas;
    scanf("%5u", &paginas);
    printf("%s", "Digite o preco do livro: ");
    float preco;
    scanf("%10f", &preco);

    Livro *awawawa = create_livro(titulo, paginas, preco);
    print_livro(awawawa);
    puts("\nDeletando livro...");
    delete_livro(awawawa);
}

Livro *
create_livro(const char *titulo, unsigned int paginas, float preco)
{
    Livro *new_livro = malloc(sizeof(Livro));
    if (new_livro == NULL) {
        fprintf(stderr, "Erro ao criar livro: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    strncpy(new_livro->titulo, titulo, BUFFER_SIZE);
    new_livro->paginas = paginas;
    new_livro->preco   = preco;

    return new_livro;
}

void
delete_livro(Livro *livro)
{
    free(livro);
}

void
print_livro(Livro *livro)
{
    printf("Titulo: %5s\n", livro->titulo); // TODO: FORMATAR DIREITO
    printf("Paginas: %3u\n", livro->paginas);
    printf("Preco: %8.2f\n", livro->preco);
}