#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
    } else {
        printf("Quadrado do numero: %.2f\n", numero * numero);
    }

    return 0;
}