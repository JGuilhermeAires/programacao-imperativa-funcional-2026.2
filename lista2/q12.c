#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Antecessor: %d\n", --numero);
    printf("Sucessor: %d\n", ++numero);
    printf("Sucessor: %d\n", ++numero);
    return 0;
}