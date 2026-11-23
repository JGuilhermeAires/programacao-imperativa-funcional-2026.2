/* Questao 03 - Controle de ingressos de cinema */
#include <stdio.h>

#define PRECO 40.0f

int main(void) {
    int idade, dia;
    float valor = PRECO;

    printf("Idade do cliente: ");
    scanf("%d", &idade);
    printf("Dia da semana (1 = Domingo, ..., 7 = Sabado): ");
    scanf("%d", &dia);

    if (idade < 0 || dia < 1 || dia > 7) {
        printf("Dados invalidos!\n");
        return 0;
    }

    /* Os descontos nao sao acumulativos: basta UMA condicao verdadeira
       para pagar metade (por isso o uso do operador ||) */
    if (idade < 12 || idade > 60 || dia == 4)
        valor = PRECO / 2;

    printf("Valor do ingresso: R$ %.2f\n", valor);
    return 0;
}
