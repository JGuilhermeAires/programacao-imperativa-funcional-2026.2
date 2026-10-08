#include <stdio.h>

int main() {
    int i;
    long long int soma = 0;
    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }
    printf("Soma total dos quadrados: %lld\n", soma);
    return 0;
}
