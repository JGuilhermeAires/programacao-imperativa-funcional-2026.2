/* Questao 19 - Contagem regressiva recursiva */
#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int n;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: n deve ser positivo.\n");
        return 0;
    }

    printf("--- Versao regressiva (n ate 1) ---\n");
    contagem(n);

    printf("--- Versao crescente (1 ate n) ---\n");
    contagemCrescente(n);
    return 0;
}

/* Versao 1: imprime de n ate 1 e, ao final, "Fogo!" */
void contagem(int n) {
    if (n == 0) {              /* caso base */
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);         /* imprime ANTES da chamada recursiva */
    contagem(n - 1);
}

/* Versao 2: imprime de 1 ate n.
   O que muda: o printf passa a ficar DEPOIS da chamada recursiva.
   - Na versao 1, o printf vem antes da chamada: o numero e impresso na
     fase de IDA (empilhamento), logo sai na ordem n, n-1, ..., 1.
   - Na versao 2, o printf vem depois da chamada: o numero so e impresso
     na fase de VOLTA (desempilhamento). Como a chamada mais interna
     (n = 1) e a primeira a terminar, a ordem sai invertida: 1, 2, ..., n. */
void contagemCrescente(int n) {
    if (n == 0)                /* caso base */
        return;
    contagemCrescente(n - 1);
    printf("%d\n", n);         /* imprime DEPOIS da chamada recursiva */
}
