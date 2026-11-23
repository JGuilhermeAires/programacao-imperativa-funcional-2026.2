/* Questao 13 - Calculadora com quatro operacoes */
#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float x, y;

    printf("===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("Digite os dois operandos: ");
    scanf("%f %f", &x, &y);

    switch (opcao) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", x, y, soma(x, y));
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", x, y, subtrai(x, y));
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", x, y, multiplica(x, y));
            break;
        case 4:
            /* valida a divisao por zero ANTES de chamar a funcao */
            if (y == 0)
                printf("Erro: divisao por zero!\n");
            else
                printf("%.2f / %.2f = %.2f\n", x, y, divide(x, y));
            break;
    }
    return 0;
}

float soma(float a, float b)       { return a + b; }
float subtrai(float a, float b)    { return a - b; }
float multiplica(float a, float b) { return a * b; }
float divide(float a, float b)     { return a / b; }
