/* Questao 04 - Analise de emprestimo pessoal */
#include <stdio.h>

int main(void) {
    int idade;
    float renda, valor;

    printf("Idade: ");
    scanf("%d", &idade);
    printf("Renda mensal (R$): ");
    scanf("%f", &renda);
    printf("Valor solicitado (R$): ");
    scanf("%f", &valor);

    if (idade >= 18 && idade <= 70 && renda >= 2000.0f) {
        if (valor <= 10 * renda)
            printf("Emprestimo aprovado!\n");
        else
            printf("Valor acima do limite permitido.\n");
    } else {
        printf("Emprestimo negado.\n");
    }
    return 0;
}
