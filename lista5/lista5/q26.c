/* Questao 26 - Sequencia de Fibonacci recursiva */
#include <stdio.h>

long fibonacci(int n);

int main(void) {
    int qtd, i;

    printf("Quantos termos deseja? ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Erro: a quantidade deve ser positiva.\n");
        return 0;
    }

    for (i = 0; i < qtd; i++)
        printf("%ld ", fibonacci(i));
    printf("\n");
    return 0;
}

long fibonacci(int n) {
    if (n == 0) return 0;    /* casos base */
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);   /* passo recursivo */
}

/* POR QUE E LENTA PARA n GRANDE?
   Cada chamada gera DUAS novas chamadas, formando uma arvore de chamadas
   que cresce exponencialmente (aprox. O(2^n)). Os mesmos subproblemas sao
   recalculados muitas vezes: por exemplo, fibonacci(5) calcula
   fibonacci(3) duas vezes, fibonacci(2) tres vezes, e assim por diante.
   Uma versao iterativa (ou com memoizacao) calcula cada termo uma unica
   vez, em tempo linear. */
