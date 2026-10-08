#include <stdio.h>
int main() {
    int saque, quantidade;
    printf("Digite o valor do saque: ");
    scanf("%d", &saque);
    if (saque <= 0) {
        printf("Valor de saque invalido.\n");
        return 0;
    }
    while (saque >= 100) {
        saque -= 100;
        printf("Cedula de R$ 100\n");
    }
    while (saque >= 50) {
        saque -= 50;
        printf("Cedula de R$ 50\n");
    }
    while (saque >= 20) {
        saque -= 20;
        printf("Cedula de R$ 20\n");
    }
    while (saque >= 10) {
        saque -= 10;
        printf("Cedula de R$ 10\n");
    }
    while (saque >= 5) {
        saque -= 5;
        printf("Cedula de R$ 5\n");
    }
    while (saque >= 2) {
        saque -= 2;
        printf("Cedula de R$ 2\n");
    }
    if (saque != 0) {
        printf("Nao foi possivel sacar o valor exato.\n");
    }
    return 0;
}