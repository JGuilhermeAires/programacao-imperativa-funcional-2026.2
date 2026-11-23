/* Questao 14 - Soma dos digitos com recursao */
#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int n;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido: deve ser positivo.\n");
        return 0;
    }

    printf("Soma dos digitos de %d = %d\n", n, somaDigitos(n));
    return 0;
}

int somaDigitos(int n) {
    /* CASO BASE: quando n e 0 (nao ha mais digitos), a soma e 0 */
    if (n == 0)
        return 0;
    /* PASSO RECURSIVO: ultimo digito (n % 10) + soma dos digitos
       do restante do numero (n / 10) */
    return (n % 10) + somaDigitos(n / 10);
}
