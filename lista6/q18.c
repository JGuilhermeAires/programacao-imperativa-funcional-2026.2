/* Questao 18 - Ordem alfabetica de tres nomes */
#include <stdio.h>
#include <string.h>

void leLinha(char s[], int tam);
void troca(char a[], char b[]);

int main(void) {
    char nomes[3][50];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Nome %d: ", i + 1);
        leLinha(nomes[i], 50);
    }

    /* ordena os tres nomes (3 comparacoes bastam) */
    if (strcmp(nomes[0], nomes[1]) > 0) troca(nomes[0], nomes[1]);
    if (strcmp(nomes[1], nomes[2]) > 0) troca(nomes[1], nomes[2]);
    if (strcmp(nomes[0], nomes[1]) > 0) troca(nomes[0], nomes[1]);

    printf("\nEm ordem alfabetica:\n");
    for (i = 0; i < 3; i++)
        puts(nomes[i]);
    return 0;
}

void leLinha(char s[], int tam) {
    fgets(s, tam, stdin);
    s[strcspn(s, "\n")] = '\0';
}

void troca(char a[], char b[]) {
    char aux[50];
    strcpy(aux, a);
    strcpy(a, b);
    strcpy(b, aux);
}
