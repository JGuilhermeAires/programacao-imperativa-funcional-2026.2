/* Questao 24 - Compilacao condicional para depuracao */
#include <stdio.h>

/* Para ativar a depuracao, descomente a linha abaixo ou compile com:
       gcc -DDEBUG -o q24 q24.c
   Sem DEBUG:
       gcc -o q24 q24.c                                              */
/* #define DEBUG */

int somaAteN(int n);

int main(void) {
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;
    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}

/* DIFERENCA DE COMPORTAMENTO:
   - COM DEBUG definido: o pre-processador mantem o printf dentro do laco,
     entao a cada iteracao e exibida a soma parcial, alem do resultado final.
   - SEM DEBUG: o pre-processador descarta o bloco #ifdef; o printf nem
     chega ao compilador/executavel, e so o resultado final e impresso. */
