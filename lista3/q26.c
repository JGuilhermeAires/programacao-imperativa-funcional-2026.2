#include <stdio.h>
int main() {
    int A, B, i, j;
    int primo, soma = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    if (A >= B || A <= 0 || B <= 0) {
        printf("Valores invalidos. A deve ser menor que B e ambos positivos.\n");
        return 0;
    }
    printf("Numeros primos no intervalo: ");
    for (i = A; i <= B; i++) {
        primo = 1;
        if (i < 2) {
            primo = 0;
        } else {
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    primo = 0;
                    break;
                }
            }
        }
        if (primo) {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nSoma dos primos: %d\n", soma);
    return 0;
}
