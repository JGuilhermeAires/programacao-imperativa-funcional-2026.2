#include <stdio.h>
int main() {
    int N;
    int numero = 1;
    printf("Digite o numero de linhas: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Numero invalido.\n");
        return 0;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", numero);
            numero++;
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}