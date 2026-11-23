/* Questao 13 - Vendas por loja e produto (matriz) */
#include <stdio.h>

#define LOJAS 4
#define PRODUTOS 3

int main(void) {
    int vendas[LOJAS][PRODUTOS], totalProduto[PRODUTOS] = {0};
    int i, j, totalLoja, melhor = 0;

    for (i = 0; i < LOJAS; i++)
        for (j = 0; j < PRODUTOS; j++) {
            printf("Unidades vendidas na loja %d do produto %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
        }

    printf("\n");
    for (i = 0; i < LOJAS; i++) {
        totalLoja = 0;
        for (j = 0; j < PRODUTOS; j++) {
            totalLoja += vendas[i][j];
            totalProduto[j] += vendas[i][j];
        }
        printf("Total vendido pela loja %d: %d\n", i + 1, totalLoja);
    }

    for (j = 1; j < PRODUTOS; j++)
        if (totalProduto[j] > totalProduto[melhor])
            melhor = j;

    printf("Produto que mais vendeu na rede: produto %d (%d unidades)\n",
           melhor + 1, totalProduto[melhor]);
    return 0;
}
