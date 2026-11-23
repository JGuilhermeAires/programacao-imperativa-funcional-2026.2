/* Questao 06 - Soma de matrizes 3x3 */
#include <stdio.h>

#define N 3

void imprime(const char *titulo, int m[N][N]);

int main(void) {
    int a[N][N], b[N][N], c[N][N], i, j;

    printf("Matriz A:\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Matriz B:\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            c[i][j] = a[i][j] + b[i][j];

    imprime("Matriz A", a);
    imprime("Matriz B", b);
    imprime("Matriz C = A + B", c);
    return 0;
}

void imprime(const char *titulo, int m[N][N]) {
    int i, j;
    printf("\n%s\n", titulo);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%6d", m[i][j]);
        printf("\n");
    }
}
