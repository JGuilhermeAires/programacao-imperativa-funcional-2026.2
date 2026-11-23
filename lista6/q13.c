/* Questao 13 - Contador de vogais e consoantes
   Observacao: gets() foi removida do padrao C11 por ser insegura (nao limita
   o tamanho lido e causa estouro de buffer). Por isso usamos fgets(), que faz
   o mesmo papel (le uma linha com espacos) de forma segura. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char frase[200];
    int i, tam, vogais = 0, consoantes = 0, espacos = 0;
    char c;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    tam = strlen(frase);
    for (i = 0; i < tam; i++) {
        c = tolower((unsigned char)frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vogais++;
        else if (c >= 'a' && c <= 'z')
            consoantes++;
        else if (c == ' ')
            espacos++;
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    printf("Espacos: %d\n", espacos);
    return 0;
}
