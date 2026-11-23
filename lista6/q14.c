/* Questao 14 - Palindromo */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char s[]);

int main(void) {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    if (ehPalindromo(palavra))
        printf("\"%s\" e um palindromo.\n", palavra);
    else
        printf("\"%s\" NAO e um palindromo.\n", palavra);
    return 0;
}

int ehPalindromo(char s[]) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if (tolower((unsigned char)s[i]) != tolower((unsigned char)s[j]))
            return 0;
        i++;
        j--;
    }
    return 1;
}
