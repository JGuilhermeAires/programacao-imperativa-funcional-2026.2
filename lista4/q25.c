#include <stdio.h>

int main() {
    int valor, pagamento, troco;
    int cem, cinquenta, vinte, dez, cinco, dois;

    printf("Digite o valor total a pagar: R$ ");
    scanf("%d", &valor);

    printf("Digite o valor entregue pelo cliente: R$ ");
    scanf("%d", &pagamento);

    if (valor <= 0 || pagamento <= 0) {
        printf("Erro: os valores devem ser positivos!\n");
    }
    else if (pagamento < valor) {
        printf("Erro: valor entregue insuficiente!\n");
    }
    else {
        troco = pagamento - valor;

        printf("\nTroco: R$ %d\n", troco);

        cem = troco / 100;
        troco = troco % 100;

        cinquenta = troco / 50;
        troco = troco % 50;

        vinte = troco / 20;
        troco = troco % 20;

        dez = troco / 10;
        troco = troco % 10;

        cinco = troco / 5;
        troco = troco % 5;

        dois = troco / 2;
        troco = troco % 2;

        printf("Cedulas de R$ 100: %d\n", cem);
        printf("Cedulas de R$ 50: %d\n", cinquenta);
        printf("Cedulas de R$ 20: %d\n", vinte);
        printf("Cedulas de R$ 10: %d\n", dez);
        printf("Cedulas de R$ 5: %d\n", cinco);
        printf("Cedulas de R$ 2: %d\n", dois);

        if (troco > 0) {
            printf("Valor restante sem cedula disponivel: R$ %d\n", troco);
        }
    }

    return 0;
}