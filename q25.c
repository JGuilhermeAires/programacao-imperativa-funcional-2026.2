#include <stdio.h>
int main() {
    int N, i, divisores = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }
    if (N > 1 && divisores == 2) {
        printf("%d e um numero primo.\n", N);
    } else {
        printf("%d nao e um numero primo.\n", N);
    }
    printf("Quantidade de divisores encontrados: %d\n", divisores);
    return 0;
}