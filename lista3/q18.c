#include <stdio.h>

int main() {
    int numero, inverso = 0, digito;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    while (numero > 0) {
        digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero = numero / 10;
    }
    printf("Numero invertido: %d\n", inverso);
    return 0;
}
