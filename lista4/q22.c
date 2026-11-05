#include <stdio.h>

int main() {
    float valor, imposto, valorFinal;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    printf("Digite o estado (1-MG, 2-SP, 3-RJ, 4-MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            imposto = valor * 0.07;
            break;

        case 2:
            imposto = valor * 0.12;
            break;

        case 3:
            imposto = valor * 0.15;
            break;

        case 4:
            imposto = valor * 0.08;
            break;

        default:
            printf("Codigo de estado invalido!\n");
            return 0;
    }

    valorFinal = valor + imposto;

    printf("Preco final com imposto: R$ %.2f\n", valorFinal);

    return 0;
}