#include <stdio.h>
int main() {
    int dias;
    double salarioBruto, gratificacao, imposto, salarioLiquido;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);
    salarioBruto = dias * 45.00;
    gratificacao = salarioBruto * 0.05;
    imposto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto + gratificacao - imposto;
    printf("\n===== HOLERITE =====\n");
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto (8%%): R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);
    return 0;
}