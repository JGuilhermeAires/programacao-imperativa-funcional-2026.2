/* Questao 11 - Ocupacao de um condominio (matriz 3D) */
#include <stdio.h>

#define BLOCOS 3
#define ANDARES 2
#define APTOS 4

int main(void) {
    int ocup[BLOCOS][ANDARES][APTOS];
    int b, a, p, totalBloco, totalGeral = 0;

    for (b = 0; b < BLOCOS; b++)
        for (a = 0; a < ANDARES; a++)
            for (p = 0; p < APTOS; p++) {
                printf("Moradores do bloco %d, andar %d, apto %d: ", b + 1, a + 1, p + 1);
                scanf("%d", &ocup[b][a][p]);
            }

    printf("\n");
    for (b = 0; b < BLOCOS; b++) {
        totalBloco = 0;
        for (a = 0; a < ANDARES; a++)
            for (p = 0; p < APTOS; p++)
                totalBloco += ocup[b][a][p];
        printf("Total de moradores do bloco %d: %d\n", b + 1, totalBloco);
        totalGeral += totalBloco;
    }
    printf("Total geral do condominio: %d\n", totalGeral);
    return 0;
}
