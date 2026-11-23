/* Questao 09 - Maior de dois numeros */
#include <stdio.h>

int maior(int a, int b);

int main(void) {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("O maior entre %d e %d e %d\n", a, b, maior(a, b));
    return 0;
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}
