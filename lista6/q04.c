/* Questao 04 - Dias corridos no ano (sem anos bissextos) */
#include <stdio.h>

int main(void) {
    int dmes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dia, mes, i, diaDoAno = 0;

    printf("Digite o dia e o mes (dia mes): ");
    scanf("%d %d", &dia, &mes);

    if (mes < 1 || mes > 12 || dia < 1 || dia > dmes[mes - 1]) {
        printf("Data invalida!\n");
        return 0;
    }

    for (i = 0; i < mes - 1; i++)
        diaDoAno += dmes[i];
    diaDoAno += dia;                      /* 1o de janeiro = dia 1 do ano */

    printf("Dias passados desde 1o de janeiro: %d\n", diaDoAno - 1);
    printf("Dias que faltam para o fim do ano: %d\n", 365 - diaDoAno);
    return 0;
}
