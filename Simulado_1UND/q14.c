#include <stdio.h>
int main() {
    int senha, tentativa = 1;
    int senhaCorreta = 2026;
    while (tentativa <= 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha == senhaCorreta) {
            printf("Acesso Concedido!\n");
            return 0;
        }
        printf("Senha incorreta!\n");
        tentativa++;
    }
    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}