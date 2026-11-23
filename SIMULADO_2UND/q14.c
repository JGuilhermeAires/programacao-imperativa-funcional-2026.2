/* Questao 14 - Cifra de Cesar
   Observacao: gets() foi removida do padrao C11 por ser insegura (nao limita
   o tamanho lido). Usamos fgets(), que le a linha inteira de forma segura. */
#include <stdio.h>
#include <string.h>

int main(void) {
    char msg[200];
    int k, i;

    printf("Mensagem (letras maiusculas): ");
    fgets(msg, sizeof(msg), stdin);
    msg[strcspn(msg, "\n")] = '\0';

    printf("Deslocamento k: ");
    scanf("%d", &k);

    k = ((k % 26) + 26) % 26;            /* normaliza (aceita k negativo ou maior que 26) */

    for (i = 0; msg[i] != '\0'; i++) {
        if (msg[i] >= 'A' && msg[i] <= 'Z')
            msg[i] = 'A' + (msg[i] - 'A' + k) % 26;   /* volta ao 'A' depois do 'Z' */
        /* demais caracteres sao mantidos */
    }

    puts(msg);
    return 0;
}
