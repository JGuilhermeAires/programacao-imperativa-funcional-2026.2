/* Questao 23 - Macro versus funcao */
#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(void) {
    /* Macro sem parenteses: DOBRO(2+3) vira 2+3*2 = 2+6 = 8 */
    printf("Macro  DOBRO(2+3) = %d\n", DOBRO(2+3));

    /* Funcao: o argumento 2+3 e avaliado ANTES da chamada (=5), logo 5*2 = 10 */
    printf("Funcao dobro(2+3) = %d\n", dobro(2+3));

    /* Por que diferem? A macro faz substituicao TEXTUAL antes da compilacao,
       sem avaliar o argumento: a multiplicacao tem precedencia sobre a soma
       e so o 3 e dobrado. A funcao recebe o VALOR ja calculado (5). */

    /* Correcao: redefinindo a macro com parenteses de protecao */
#undef DOBRO
#define DOBRO(x) ((x)*2)
    printf("Macro corrigida DOBRO(2+3) = %d\n", DOBRO(2+3));   /* ((2+3)*2) = 10 */
    return 0;
}

int dobro(int x) {
    return x * 2;
}
