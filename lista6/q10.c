/* Questao 10 - Gerador de jogos de loteria */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGOS 5

int main(void) {
    int jogos[JOGOS][6], i, j, k, n, repetido;

    srand((unsigned)time(NULL));

    for (i = 0; i < JOGOS; i++) {
        for (j = 0; j < 6; j++) {
            do {
                n = rand() % 60 + 1;
                repetido = 0;
                for (k = 0; k < j; k++)       /* confere dezenas ja sorteadas no jogo */
                    if (jogos[i][k] == n) {
                        repetido = 1;
                        break;
                    }
            } while (repetido);
            jogos[i][j] = n;
        }
    }

    for (i = 0; i < JOGOS; i++) {
        printf("Jogo %d: ", i + 1);
        for (j = 0; j < 6; j++)
            printf("%02d ", jogos[i][j]);
        printf("\n");
    }
    return 0;
}
