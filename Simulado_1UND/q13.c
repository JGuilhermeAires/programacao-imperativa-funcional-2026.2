#include <stdio.h>
int main() {
    int N;
    long long int fatorial = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Nao existe fatorial para numeros negativos.\n");
    } else {
        for (int i = 1; i <= N; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", N, fatorial);
    }
    return 0;
}