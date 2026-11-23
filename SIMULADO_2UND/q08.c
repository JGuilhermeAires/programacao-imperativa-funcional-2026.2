/* Questao 08 - Funcoes recursivas: soma de digitos e potencia */
#include <stdio.h>

int somaDigitos(int n);
long potencia(int base, int exp);

int main(void) {
    int n, base, exp;

    printf("Digite um inteiro nao negativo para somar os digitos: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Numero invalido.\n");
    else
        printf("Soma dos digitos de %d = %d\n", n, somaDigitos(n));

    printf("Digite a base e o expoente (nao negativo): ");
    scanf("%d %d", &base, &exp);
    if (exp < 0)
        printf("Expoente invalido.\n");
    else
        printf("%d elevado a %d = %ld\n", base, exp, potencia(base, exp));
    return 0;
}

int somaDigitos(int n) {
    if (n == 0)                         /* caso base */
        return 0;
    return (n % 10) + somaDigitos(n / 10);   /* passo recursivo */
}

long potencia(int base, int exp) {
    if (exp == 0)                       /* caso base */
        return 1;
    return (long)base * potencia(base, exp - 1);   /* passo recursivo */
}
