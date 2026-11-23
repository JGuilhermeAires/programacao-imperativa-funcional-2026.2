/* Questao 03 - Frequencia de valores (30 lancamentos de um dado) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int lancamentos[30], freq[6] = {0}, i;

    srand((unsigned)time(NULL));

    for (i = 0; i < 30; i++) {
        lancamentos[i] = rand() % 6 + 1;
        freq[lancamentos[i] - 1]++;
    }

    printf("Lancamentos: ");
    for (i = 0; i < 30; i++)
        printf("%d ", lancamentos[i]);
    printf("\n");

    for (i = 0; i < 6; i++)
        printf("Face %d: %d vezes\n", i + 1, freq[i]);
    return 0;
}
