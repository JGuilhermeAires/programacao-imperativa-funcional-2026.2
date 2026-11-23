/* Questao 12 - Jogo da velha */
#include <stdio.h>

void imprimeTabuleiro(char tab[3][3]);
char verificaVencedor(char tab[3][3]);   /* devolve 'X', 'O' ou ' ' (ninguem) */

int main(void) {
    char tab[3][3], jogador = 'X', vencedor = ' ';
    int i, j, linha, coluna, jogadas = 0;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            tab[i][j] = ' ';

    imprimeTabuleiro(tab);

    while (jogadas < 9 && vencedor == ' ') {
        printf("Jogador %c, informe linha e coluna (0 a 2): ", jogador);
        if (scanf("%d %d", &linha, &coluna) != 2) {
            printf("Entrada invalida!\n");
            return 1;
        }

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("Posicao fora do tabuleiro! Tente novamente.\n");
            continue;
        }
        if (tab[linha][coluna] != ' ') {
            printf("Posicao ja ocupada! Tente novamente.\n");
            continue;
        }

        tab[linha][coluna] = jogador;
        jogadas++;
        imprimeTabuleiro(tab);

        vencedor = verificaVencedor(tab);
        if (vencedor == ' ')
            jogador = (jogador == 'X') ? 'O' : 'X';
    }

    if (vencedor != ' ')
        printf("Jogador %c venceu!\n", vencedor);
    else
        printf("Empate!\n");
    return 0;
}

void imprimeTabuleiro(char tab[3][3]) {
    int i;
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", tab[i][0], tab[i][1], tab[i][2]);
        if (i < 2) printf("---+---+---\n");
    }
    printf("\n");
}

char verificaVencedor(char tab[3][3]) {
    int i;
    for (i = 0; i < 3; i++) {
        if (tab[i][0] != ' ' && tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2])
            return tab[i][0];                       /* linha */
        if (tab[0][i] != ' ' && tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i])
            return tab[0][i];                       /* coluna */
    }
    if (tab[1][1] != ' ' &&
        ((tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2]) ||
         (tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0])))
        return tab[1][1];                           /* diagonais */
    return ' ';
}
