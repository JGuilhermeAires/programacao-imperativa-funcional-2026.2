#include <stdio.h>

int main() {
    float laboratorio, semestral, exame, media;

    printf("Digite a nota do Trabalho de Laboratorio: ");
    scanf("%f", &laboratorio);

    printf("Digite a nota da Avaliacao Semestral: ");
    scanf("%f", &semestral);

    printf("Digite a nota do Exame Final: ");
    scanf("%f", &exame);

    media = (laboratorio * 2 + semestral * 3 + exame * 5) / 10;

    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situacao: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Aprovado\n");
    }

    return 0;
}