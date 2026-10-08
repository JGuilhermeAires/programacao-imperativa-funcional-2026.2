#include <stdio.h>

int main() {
    int N, i, j;
    int numero = 1;
    printf("Digite o numero de linhas: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }
    return 0;
}
