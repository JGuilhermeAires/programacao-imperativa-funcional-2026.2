#include <stdio.h>

int main() {
    float salario, aumento, novoSalario;
    int cargo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    printf("Digite o codigo do cargo (1-Tecnico, 2-Gerente, 3-Demais): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                aumento = salario * 0.15;
            } else {
                aumento = salario * 0.10;
            }
            break;

        case 2:
            if (salario <= 5000) {
                aumento = salario * 0.10;
            } else {
                aumento = salario * 0.05;
            }
            break;

        case 3:
            aumento = salario * 0.08;
            break;

        default:
            printf("Codigo de cargo invalido!\n");
            return 0;
    }

    novoSalario = salario + aumento;

    printf("\nValor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}