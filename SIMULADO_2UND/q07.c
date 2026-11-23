/* Questao 07 - Numeros primos com funcao */
#include <stdio.h>

int ehPrimo(int n);

int main(void) {
    int n, i;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("Primos de 1 ate %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (ehPrimo(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}

int ehPrimo(int n) {
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
