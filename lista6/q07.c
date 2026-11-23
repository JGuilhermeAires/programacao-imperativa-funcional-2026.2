/* Questao 07 - Diagonais da matriz 4x4 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int main(void) {
    int m[N][N], i, j;
    int principal = 0, secundaria = 0, acima = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            m[i][j] = rand() % 20 + 1;

    printf("Matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        principal += m[i][i];
        secundaria += m[i][N - 1 - i];
        for (j = i + 1; j < N; j++)       /* j > i: acima da diagonal principal */
            acima += m[i][j];
    }

    printf("Soma da diagonal principal: %d\n", principal);
    printf("Soma da diagonal secundaria: %d\n", secundaria);
    printf("Soma acima da diagonal principal: %d\n", acima);
    return 0;
}
