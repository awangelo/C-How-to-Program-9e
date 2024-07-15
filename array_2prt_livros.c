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

Livro *create_livro(const char *p_titulo, unsigned int paginas, float preco);
Livro *copy_livro(const Livro *p_livro);
void delete_livro(Livro **pp_livro);
void print_livro(const Livro *p_livro);

int
main()
{
    Livro **pp_arr_livros = calloc(3, sizeof(Livro *));
    if (pp_arr_livros == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para o array de ptrs: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    //     LEAK SUMMARY:
    //     definitely lost: 24 bytes in 1 blocks
    printf("%zu\n", 3 * sizeof(pp_arr_livros));
    // Lembrar de liberar as referencias no array de ptrs

    pp_arr_livros[0] = create_livro("C How to Program", 1000, 100.0);
    pp_arr_livros[1] = create_livro("O corvo", 50, 10.0);
    pp_arr_livros[2] = create_livro("Alice in Wonderland", 200, 20.0);

    for (int i = 0; i < 3; i++) {
        print_livro(pp_arr_livros[i]);
        printf("\n");
    }

    puts("Deletando livros...");
    for (int i = 0; i < 3; i++) {
        delete_livro(&pp_arr_livros[i]);
    }

    // free(pp_arr_livros);
    // pp_arr_livros = NULL;
}

Livro *
create_livro(const char *p_titulo, unsigned int paginas, float preco)
{
    Livro *p_new_livro = malloc(sizeof(Livro));
    if (p_new_livro == NULL) {
        fprintf(stderr, "Erro ao criar livro: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    strncpy(p_new_livro->titulo, p_titulo, BUFFER_SIZE);
    p_new_livro->titulo[BUFFER_SIZE - 1] = '\0';

    p_new_livro->paginas = paginas;
    p_new_livro->preco   = preco;

    return p_new_livro;
}

void
delete_livro(Livro **pp_livro)
{
    if (pp_livro != NULL && *pp_livro != NULL) {
        free(*pp_livro);
        *pp_livro = NULL;
    }
}

void
print_livro(const Livro *p_livro)
{
    printf("Titulo: %s\n", p_livro->titulo);
    printf("Paginas: %u\n", p_livro->paginas);
    printf("Preco: %.2f\n", p_livro->preco);
}