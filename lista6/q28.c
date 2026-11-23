/* Questao 28 - Mini biblioteca */
#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct {
    char titulo[60];
    char autor[40];
    int ano;
    int disponivel;     /* 1 = disponivel, 0 = emprestado */
} Livro;

void leLinha(char s[], int tam);
int leInt(void);
void cadastrar(Livro lib[], int *n);
void listar(Livro lib[], int n);
int buscaIndice(Livro lib[], int n, char titulo[]);
void buscar(Livro lib[], int n);
void emprestar(Livro lib[], int n);
void devolver(Livro lib[], int n);

int main(void) {
    Livro lib[MAX];
    int n = 0, opcao;

    do {
        printf("\n===== MINI BIBLIOTECA =====\n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Listar todos\n");
        printf("3 - Buscar por titulo\n");
        printf("4 - Emprestar\n");
        printf("5 - Devolver\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        opcao = leInt();

        switch (opcao) {
            case 1: cadastrar(lib, &n); break;
            case 2: listar(lib, n);     break;
            case 3: buscar(lib, n);     break;
            case 4: emprestar(lib, n);  break;
            case 5: devolver(lib, n);   break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
    return 0;
}

void leLinha(char s[], int tam) {
    if (fgets(s, tam, stdin) == NULL) {
        s[0] = '\0';
        return;
    }
    s[strcspn(s, "\n")] = '\0';
}

int leInt(void) {
    char buf[32];
    int v = -1;
    leLinha(buf, sizeof(buf));
    sscanf(buf, "%d", &v);
    return v;
}

void cadastrar(Livro lib[], int *n) {
    if (*n == MAX) {
        printf("Biblioteca cheia (maximo de %d livros).\n", MAX);
        return;
    }
    printf("Titulo: ");
    leLinha(lib[*n].titulo, sizeof(lib[*n].titulo));
    printf("Autor: ");
    leLinha(lib[*n].autor, sizeof(lib[*n].autor));
    printf("Ano: ");
    lib[*n].ano = leInt();
    lib[*n].disponivel = 1;
    (*n)++;
    printf("Livro cadastrado!\n");
}

void listar(Livro lib[], int n) {
    int i;
    if (n == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }
    for (i = 0; i < n; i++)
        printf("%d. %s - %s (%d) [%s]\n", i + 1, lib[i].titulo, lib[i].autor,
               lib[i].ano, lib[i].disponivel ? "disponivel" : "emprestado");
}

/* devolve a posicao do livro com o titulo exato ou -1 */
int buscaIndice(Livro lib[], int n, char titulo[]) {
    int i;
    for (i = 0; i < n; i++)
        if (strcmp(lib[i].titulo, titulo) == 0)
            return i;
    return -1;
}

void buscar(Livro lib[], int n) {
    char titulo[60];
    int i;
    printf("Titulo a buscar: ");
    leLinha(titulo, sizeof(titulo));
    i = buscaIndice(lib, n, titulo);
    if (i == -1)
        printf("Livro nao encontrado.\n");
    else
        printf("%s - %s (%d) [%s]\n", lib[i].titulo, lib[i].autor, lib[i].ano,
               lib[i].disponivel ? "disponivel" : "emprestado");
}

void emprestar(Livro lib[], int n) {
    char titulo[60];
    int i;
    printf("Titulo do livro a emprestar: ");
    leLinha(titulo, sizeof(titulo));
    i = buscaIndice(lib, n, titulo);
    if (i == -1)
        printf("Livro nao encontrado.\n");
    else if (!lib[i].disponivel)
        printf("Livro ja esta emprestado.\n");
    else {
        lib[i].disponivel = 0;
        printf("Emprestimo realizado!\n");
    }
}

void devolver(Livro lib[], int n) {
    char titulo[60];
    int i;
    printf("Titulo do livro a devolver: ");
    leLinha(titulo, sizeof(titulo));
    i = buscaIndice(lib, n, titulo);
    if (i == -1)
        printf("Livro nao encontrado.\n");
    else if (lib[i].disponivel)
        printf("Este livro ja estava disponivel.\n");
    else {
        lib[i].disponivel = 1;
        printf("Devolucao realizada!\n");
    }
}
