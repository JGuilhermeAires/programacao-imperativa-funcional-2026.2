#include <stdio.h>

int main() {
    int N, i;
    long long int a = 1, b = 1, proximo;
    printf("Digite o termo desejado: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("O termo deve ser maior que zero.\n");
        return 0;
    }
    printf("Termos: ");
    for (i = 1; i <= N; i++) {
        printf("%lld ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }
    printf("\n");
    a = 1;
    b = 1;
    for (i = 1; i < N; i++) {
        proximo = a + b;
        a = b;
        b = proximo;
    }
    printf("O %dº termo de Fibonacci e: %lld\n", N, a);
    return 0;
}
