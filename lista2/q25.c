#include <stdio.h>

int main() {
    float salario, gratificacao, imposto, salarioLiquido;

    printf("Digite o salario-base: ");
    scanf("%f", &salario);

    gratificacao = salario * 0.05;
    imposto = salario * 0.07;
    salarioLiquido = salario + gratificacao - imposto;

    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}