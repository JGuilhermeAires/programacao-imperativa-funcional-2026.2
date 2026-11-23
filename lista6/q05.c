/* Questao 05 - Funcoes que recebem vetores */
#include <stdio.h>

#define N 8

int somaVetor(int v[], int n);
int maiorValor(int v[], int n);
int buscaValor(int v[], int n, int x);

int main(void) {
    int v[N], i, x, pos;

    for (i = 0; i < N; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Soma = %d\n", somaVetor(v, N));
    printf("Maior valor = %d\n", maiorValor(v, N));

    printf("Valor a buscar: ");
    scanf("%d", &x);
    pos = buscaValor(v, N, x);
    if (pos == -1)
        printf("Valor %d nao encontrado.\n", x);
    else
        printf("Valor %d encontrado na posicao %d.\n", x, pos);
    return 0;
}

int somaVetor(int v[], int n) {
    int i, soma = 0;
    for (i = 0; i < n; i++)
        soma += v[i];
    return soma;
}

int maiorValor(int v[], int n) {
    int i, maior = v[0];
    for (i = 1; i < n; i++)
        if (v[i] > maior) maior = v[i];
    return maior;
}

int buscaValor(int v[], int n, int x) {
    int i;
    for (i = 0; i < n; i++)
        if (v[i] == x) return i;      /* primeira ocorrencia */
    return -1;
}
