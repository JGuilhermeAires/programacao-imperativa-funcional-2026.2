/* Questao 15 - Minhas proprias funcoes de string (sem string.h) */
#include <stdio.h>

int meuStrlen(char s[]);
void inverte(char s[]);
void removeChar(char s[], int pos);

int main(void) {
    char s[100];
    int c, i = 0, pos;

    printf("Digite uma string: ");
    while (i < 99 && (c = getchar()) != '\n' && c != EOF)   /* le a linha (aceita espacos) */
        s[i++] = (char)c;
    s[i] = '\0';

    printf("meuStrlen: %d\n", meuStrlen(s));

    inverte(s);
    printf("Invertida: %s\n", s);
    inverte(s);                                   /* inverte de novo para restaurar */
    printf("Restaurada: %s\n", s);

    printf("Posicao do caractere a remover (0 a %d): ", meuStrlen(s) - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= meuStrlen(s))
        printf("Posicao invalida!\n");
    else {
        removeChar(s, pos);
        printf("Apos remover: %s\n", s);
    }
    return 0;
}

int meuStrlen(char s[]) {
    int n = 0;
    while (s[n] != '\0')
        n++;
    return n;
}

void inverte(char s[]) {
    int i = 0, j = meuStrlen(s) - 1;
    char aux;
    while (i < j) {
        aux = s[i];
        s[i] = s[j];
        s[j] = aux;
        i++;
        j--;
    }
}

void removeChar(char s[], int pos) {
    int i;
    for (i = pos; s[i] != '\0'; i++)
        s[i] = s[i + 1];                           /* desloca para a esquerda (copia o '\0' tambem) */
}
