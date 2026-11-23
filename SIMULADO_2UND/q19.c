/* Questao 19 - Niveis de acesso com enumeracao */
#include <stdio.h>

typedef enum { VISITANTE = 1, USUARIO, ADMIN } Nivel;

typedef struct {
    char nome[50];
    Nivel nivel;
} Usuario;

int main(void) {
    Usuario u;
    int n;

    printf("Nome do usuario: ");
    scanf(" %49[^\n]", u.nome);
    printf("Nivel (1 - Visitante, 2 - Usuario, 3 - Administrador): ");
    scanf("%d", &n);
    u.nivel = (Nivel)n;

    printf("\nUsuario: %s\n", u.nome);
    switch (u.nivel) {
        case VISITANTE:
            printf("Permissoes: apenas leitura\n");
            break;
        case USUARIO:
            printf("Permissoes: leitura e escrita\n");
            break;
        case ADMIN:
            printf("Permissoes: leitura, escrita e gerenciamento de usuarios\n");
            break;
        default:
            printf("Nivel de acesso invalido!\n");
    }
    return 0;
}
