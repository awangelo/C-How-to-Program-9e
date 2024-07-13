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
    char nome[BUFFER_SIZE];
    unsigned short idade;
    Livro *livro;
} Aluno;

Livro *create_livro(const char *p_titulo, unsigned int paginas, float preco);
Livro *copy_livro(const Livro *p_livro);
void delete_livro(Livro **pp_livro);
void print_livro(const Livro *p_livro);
Aluno *create_aluno(const char *p_nome, unsigned short idade, const Livro *p_livro);
void delete_aluno(Aluno **pp_aluno);
void print_aluno(const Aluno *p_aluno);
void clear_input_buffer();

int
main()
{
    char titulo[BUFFER_SIZE];
    unsigned int paginas;
    float preco;
    char nome[BUFFER_SIZE];
    unsigned short idade;

    printf("%s", "Digite o nome do aluno: ");
    fgets(nome, BUFFER_SIZE, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("%s", "Digite a idade do aluno: ");
    while (scanf("%3hu", &idade) != 1) {
        clear_input_buffer();
        printf("Digite uma idade valida: ");
    }
    clear_input_buffer();

    printf("%s", "Digite o titulo do livro: ");
    fgets(titulo, BUFFER_SIZE, stdin);
    titulo[strcspn(titulo, "\n")] = '\0';

    printf("%s", "Digite o numero de paginas: ");
    while (scanf("%5u", &paginas) != 1) {
        clear_input_buffer();
        printf("Digite um numero valido de páginas: ");
    }
    clear_input_buffer();

    printf("%s", "Digite o preco do livro: ");
    while (scanf("%10f", &preco) != 1) {
        clear_input_buffer();
        printf("Digite um preco valido: ");
    }
    clear_input_buffer();

    Livro *p_livro = create_livro(titulo, paginas, preco);
    Aluno *p_aluno = create_aluno(nome, idade, p_livro);

    print_aluno(p_aluno);
    puts("\nDeletando aluno...");
    delete_aluno(&p_aluno); // Deletando o aluno, copia do livro

    delete_livro(&p_livro); // Deletando o livro original (ultimo erro no valgrind)
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

Livro *
copy_livro(const Livro *p_livro)
{
    return create_livro(p_livro->titulo, p_livro->paginas, p_livro->preco);
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

Aluno *
create_aluno(const char *p_nome, unsigned short idade, const Livro *p_livro)
{
    Aluno *p_new_aluno = malloc(sizeof(Aluno));
    if (p_new_aluno == NULL) {
        fprintf(stderr, "Erro ao criar aluno: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    strncpy(p_new_aluno->nome, p_nome, BUFFER_SIZE);
    p_new_aluno->nome[BUFFER_SIZE - 1] = '\0';

    p_new_aluno->idade = idade;
    p_new_aluno->livro = copy_livro(p_livro);

    return p_new_aluno;
}

void
delete_aluno(Aluno **pp_aluno)
{
    if (pp_aluno != NULL && *pp_aluno != NULL) {
        delete_livro(&(*pp_aluno)->livro);
        free(*pp_aluno);
        *pp_aluno = NULL;
    }
}

void
print_aluno(const Aluno *p_aluno)
{
    printf("Nome: %s\n", p_aluno->nome);
    printf("Idade: %hu\n", p_aluno->idade);
    puts("Livro do aluno:");
    print_livro(p_aluno->livro);
}

void
clear_input_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}