#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Escolha a operacao:\n");
    printf("+ - Soma\n");
    printf("- - Subtracao\n");
    printf("* - Multiplicacao\n");
    printf("/ - Divisao\n");
    printf("^ - Potenciacao\n");

    printf("Digite a operacao desejada: ");
    scanf(" %c", &operacao);

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;

        case '^':
            resultado = pow(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        default:
            printf("Erro: operacao invalida!\n");
    }

    return 0;
}