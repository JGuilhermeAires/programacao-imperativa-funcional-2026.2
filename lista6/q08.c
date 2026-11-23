/* Questao 08 - Matriz transposta (3x4 -> 4x3) */
#include <stdio.h>

#define L 3
#define C 4

int main(void) {
    int m[L][C], t[C][L], i, j;

    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }

    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++)
            t[j][i] = m[i][j];

    printf("\nMatriz original (3x4):\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++)
            printf("%5d", m[i][j]);
        printf("\n");
    }

    printf("\nMatriz transposta (4x3):\n");
    for (i = 0; i < C; i++) {
        for (j = 0; j < L; j++)
            printf("%5d", t[i][j]);
        printf("\n");
    }
    return 0;
}
