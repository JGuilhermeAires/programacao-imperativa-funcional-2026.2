#include <stdio.h>

int main() {
    float valor, soma = 0.0, media;
    int quantidade = 0;

    do {
        printf("Digite um valor positivo (negativo para parar): ");
        scanf("%f", &valor);
        if (valor >= 0) {
            soma += valor;
            quantidade++;
        }
    } while (valor >= 0);

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Quantidade de valores: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    return 0;
}
