#include <stdio.h>
int main() {
    int L, i, j;
    printf("Digite o tamanho do lado (3 a 20): ");
    scanf("%d", &L);
    if (L < 3 || L > 20) {
        printf("Valor invalido. Digite um numero entre 3 e 20.\n");
        return 0;
    }
    for (i = 1; i <= L; i++) {
        for (j = 1; j <= L; j++) {
            if (i == 1 || i == L || j == 1 || j == L) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}