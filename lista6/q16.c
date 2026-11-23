/* Questao 16 - Autenticacao de usuario */
#include <stdio.h>
#include <string.h>

int main(void) {
    const char senha[] = "c@esar2026";
    char tentativa[100];
    int tentativas = 0, liberado = 0;

    while (tentativas < 3 && !liberado) {
        printf("Digite a senha: ");
        scanf("%99s", tentativa);

        if (strlen(tentativa) < 6) {
            printf("Senha muito curta (minimo 6 caracteres). Nao conta como tentativa.\n");
            continue;                              /* nao incrementa tentativas */
        }

        tentativas++;
        if (strcmp(tentativa, senha) == 0)
            liberado = 1;
        else
            printf("Senha incorreta. Tentativa %d de 3.\n", tentativas);
    }

    if (liberado)
        printf("Acesso liberado\n");
    else
        printf("Acesso bloqueado\n");
    return 0;
}
