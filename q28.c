#include <stdio.h>

int main() {
    float horasNormais, horasExtras;
    float salarioBruto, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    salarioBruto = (horasNormais * 10.0) + (horasExtras * 15.0);
    imposto = salarioBruto > 12000.0 ? (salarioBruto - 12000.0) * 0.10 : 0.0;

    printf("Salario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto: R$ %.2f\n", imposto);

    return 0;
}