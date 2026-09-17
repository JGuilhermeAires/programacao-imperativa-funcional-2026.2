#include <stdio.h>

int main() {
    int num1, num2;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtracao: %d\n", num1 - num2);
    printf("Multiplicacao: %d\n", num1 * num2);

    if (num2 != 0) {
        divisao = (float)num1 / num2;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}