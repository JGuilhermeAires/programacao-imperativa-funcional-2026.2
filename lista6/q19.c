/* Questao 19 - Agenda de nomes (matriz de strings) */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define QTD 5
#define TAM 30

int main(void) {
    char nomes[QTD][TAM];
    int i, maior = 0, menor = 0, mesmaLetra = 0;

    for (i = 0; i < QTD; i++) {
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], TAM, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    for (i = 1; i < QTD; i++) {
        if (strlen(nomes[i]) > strlen(nomes[maior])) maior = i;
        if (strlen(nomes[i]) < strlen(nomes[menor])) menor = i;
    }
    for (i = 0; i < QTD; i++)
        if (tolower((unsigned char)nomes[i][0]) == tolower((unsigned char)nomes[0][0]))
            mesmaLetra++;                      /* inclui o proprio primeiro nome */

    printf("\nNome mais longo: %s\n", nomes[maior]);
    printf("Nome mais curto: %s\n", nomes[menor]);
    printf("Nomes que comecam com a letra '%c' (inclui o primeiro): %d\n",
           nomes[0][0], mesmaLetra);
    return 0;
}
