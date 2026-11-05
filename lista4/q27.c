#include <stdio.h>

int main() {
    int horas;
    float valor = 0;

    printf("Digite o total de horas de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Tempo de permanencia invalido!\n");
    }
    else {
        if (horas >= 1) {
            valor += 2.00;
        }

        if (horas >= 2) {
            valor += 2.00;
        }

        if (horas >= 3) {
            valor += 2.50;
        }

        if (horas >= 4) {
            valor += 2.50;
        }

        if (horas >= 5) {
            valor += (horas - 4) * 3.00;
        }

        printf("\nTempo total: %d horas\n", horas);
        printf("Valor final: R$ %.2f\n", valor);
    }

    return 0;
}