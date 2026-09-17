#include <stdio.h>

int main() {
    int numero;
    int quadrado;
    float decima;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    decima = numero / 10.0;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima);

    return 0;
}