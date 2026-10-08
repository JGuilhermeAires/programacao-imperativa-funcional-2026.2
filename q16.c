#include <stdio.h>

int main() {
    int senha, tentativa;
    int senhaSecreta = 2026;

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha == senhaSecreta) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);
            return 0;
        }
        printf("Senha incorreta!\n");
    }
    printf("Conta Bloqueada por Segurança!\n");
    return 0;
}
