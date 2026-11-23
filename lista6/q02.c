/* Questao 02 - Vetor invertido com controle de limite */
#include <stdio.h>

#define TAMANHO 15

int main(void) {
    int vet[TAMANHO], num, n = 0, i;

    do {
        printf("Numero: ");
        scanf("%d", &num);
        if (num != 0) {
            if (n == TAMANHO) { printf("BUFFER LOTADO\n"); break; }
            vet[n++] = num;
        }
    } while (num != 0);

    printf("Valores na ordem inversa:\n");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", vet[i]);
    printf("\n");
    return 0;
}
