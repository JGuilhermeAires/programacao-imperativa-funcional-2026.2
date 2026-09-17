#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    float mediaSimples, mediaPonderada;

    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    mediaSimples = (n1 + n2 + n3 + n4) / 4;
    mediaPonderada = (n1 + n2 + (n3 * 2) + (n4 * 2)) / 6;

    printf("Media simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}