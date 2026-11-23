/* Questao 17 - Fatorial iterativo e recursivo */
#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long fi, fr;

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido: deve ser nao negativo.\n");
        return 0;
    }
    if (n > 20) {
        printf("Valor muito grande: 20! e o maior fatorial que cabe em long de 64 bits.\n");
        return 0;
    }

    fi = fatorialIterativo(n);
    fr = fatorialRecursivo(n);

    printf("Fatorial iterativo  de %d = %ld\n", n, fi);
    printf("Fatorial recursivo  de %d = %ld\n", n, fr);
    if (fi == fr)
        printf("Os resultados COINCIDEM.\n");
    else
        printf("Os resultados sao DIFERENTES.\n");
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;
    for (i = 2; i <= n; i++)
        resultado *= i;
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n <= 1)               /* caso base */
        return 1;
    return (long)n * fatorialRecursivo(n - 1);   /* passo recursivo */
}
