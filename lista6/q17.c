/* Questao 17 - Nome completo */
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50], sobrenome[50], completo[110];

    printf("Primeiro nome: ");
    scanf("%49s", nome);
    printf("Sobrenome: ");
    scanf("%49s", sobrenome);

    strcpy(completo, sobrenome);      /* "Sobrenome" */
    strcat(completo, ", ");           /* "Sobrenome, " */
    strcat(completo, nome);           /* "Sobrenome, Nome" */

    puts(completo);
    printf("Quantidade de caracteres: %d\n", (int)strlen(completo));
    return 0;
}
