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

typedef struct {
    Livro **arr;
    size_t size;
} ArrayLivros;

ArrayLivros *create_array_livros(size_t size);
Livro *create_livro(const char *p_titulo, unsigned int paginas, float preco);
Livro *copy_livro(const Livro *p_livro);
void delete_livro(Livro **pp_livro);
void print_livro(const Livro *p_livro);

int
main()
{
    ArrayLivros *p_arr_livros = create_array_livros(3);

    p_arr_livros->arr[0] = create_livro("C How to Program", 1000, 100.0);
    p_arr_livros->arr[1] = create_livro("O corvo", 50, 10.0);
    p_arr_livros->arr[2] = create_livro("Alice in Wonderland", 200, 20.0);

    for (int i = 0; i < 3; i++) {
        print_livro(p_arr_livros->arr[i]);
        printf("\n");
    }

    puts("Deletando livros...");
    for (int i = 0; i < 3; i++)
        delete_livro(&p_arr_livros->arr[i]);

    free(p_arr_livros->arr);
    p_arr_livros->arr = NULL;
    free(p_arr_livros);
    p_arr_livros = NULL;
}

ArrayLivros *
create_array_livros(size_t size)
{
    // Lembra que o ArrayLivros tem que reservar memoria para si mesmo e para o array de ptrs
    // Primeiro para si...
    ArrayLivros *p_new_array = malloc(sizeof(ArrayLivros));
    if (p_new_array == NULL) {
        fprintf(stderr, "Erro ao criar array de livros: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }
    // Agora para o array de ptrs (-> porque eh um ponteiro)
    p_new_array->arr = calloc(size, sizeof(Livro *));
    if (p_new_array->arr == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para o array de livros: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    p_new_array->size = size;

    return p_new_array;
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