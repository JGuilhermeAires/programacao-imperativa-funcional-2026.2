/* Questao 22 - Biblioteca de areas com arquivo de cabecalho */
#include <stdio.h>
#include "areas.h"

int main(void) {
    double raio, base, alt;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);
    printf("Area do circulo = %.2f\n", A_CIRC(raio));

    printf("Digite a base e a altura do retangulo: ");
    scanf("%lf %lf", &base, &alt);
    printf("Area do retangulo = %.2f\n", A_RET(base, alt));

    printf("Digite a base e a altura do triangulo: ");
    scanf("%lf %lf", &base, &alt);
    printf("Area do triangulo = %.2f\n", A_TRI(base, alt));
    return 0;
}
