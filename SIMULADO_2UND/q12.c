/* Questao 12 - Temperaturas da semana (vetores) */
#include <stdio.h>

#define TAM 10

int main(void) {
    float temp[TAM], soma = 0, media, maior;
    int i, posMaior = 0, acima = 0;

    for (i = 0; i < TAM; i++) {
        printf("Temperatura maxima do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    media = soma / TAM;
    maior = temp[0];
    for (i = 1; i < TAM; i++)
        if (temp[i] > maior) {
            maior = temp[i];
            posMaior = i;
        }
    for (i = 0; i < TAM; i++)
        if (temp[i] > media)
            acima++;

    printf("Temperatura media: %.2f\n", media);
    printf("Maior temperatura: %.2f (posicao %d, ou seja, dia %d)\n",
           maior, posMaior, posMaior + 1);
    printf("Dias acima da media: %d\n", acima);
    return 0;
}
