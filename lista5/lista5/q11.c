/* Questao 11 - Verificacao de numero par */
#include <stdio.h>

int ehPar(int n);

int main(void) {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (ehPar(n))
        printf("O numero %d e PAR.\n", n);
    else
        printf("O numero %d e IMPAR.\n", n);
    return 0;
}

int ehPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}
