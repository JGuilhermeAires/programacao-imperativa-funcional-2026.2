/* Questao 15 - Lista de convidados (matriz de strings) */
#include <stdio.h>
#include <string.h>

#define QTD 5
#define TAM 30

int main(void) {
    char convidados[QTD][TAM], busca[TAM];
    int i, pos = -1;

    for (i = 0; i < QTD; i++) {
        printf("Convidado %d: ", i + 1);
        fgets(convidados[i], TAM, stdin);
        convidados[i][strcspn(convidados[i], "\n")] = '\0';
    }

    printf("Nome a procurar: ");
    fgets(busca, TAM, stdin);
    busca[strcspn(busca, "\n")] = '\0';

    for (i = 0; i < QTD; i++)
        if (strcmp(convidados[i], busca) == 0) {
            pos = i + 1;                 /* posicao de 1 a 5 */
            break;
        }

    if (pos == -1)
        printf("%s NAO esta na lista.\n", busca);
    else
        printf("%s esta na lista, na posicao %d.\n", busca, pos);
    return 0;
}
