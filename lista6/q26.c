/* Questao 26 - Pedidos e status */
#include <stdio.h>

#define QTD 6

typedef enum { PENDENTE, PAGO, ENTREGUE } Status;

typedef struct {
    int codigo;
    float valor;
    Status status;
} Pedido;

int main(void) {
    Pedido pedidos[QTD];
    const char *nomes[] = {"PENDENTE", "PAGO", "ENTREGUE"};
    int i, codigo, novo, achou = 0, qtd[3] = {0, 0, 0};
    float total[3] = {0, 0, 0};

    for (i = 0; i < QTD; i++) {
        printf("Pedido %d - codigo: ", i + 1);
        scanf("%d", &pedidos[i].codigo);
        printf("Pedido %d - valor: ", i + 1);
        scanf("%f", &pedidos[i].valor);
        pedidos[i].status = PENDENTE;          /* todo pedido comeca pendente */
    }

    printf("\nCodigo do pedido a alterar: ");
    scanf("%d", &codigo);
    printf("Novo status (0 - PENDENTE, 1 - PAGO, 2 - ENTREGUE): ");
    scanf("%d", &novo);

    if (novo < PENDENTE || novo > ENTREGUE) {
        printf("Status invalido!\n");
    } else {
        for (i = 0; i < QTD; i++)
            if (pedidos[i].codigo == codigo) {
                pedidos[i].status = (Status)novo;
                achou = 1;
            }
        if (!achou)
            printf("Pedido %d nao encontrado.\n", codigo);
    }

    for (i = 0; i < QTD; i++) {
        qtd[pedidos[i].status]++;
        total[pedidos[i].status] += pedidos[i].valor;
    }

    printf("\nResumo por status:\n");
    for (i = 0; i < 3; i++)
        printf("%-9s: %d pedido(s), valor total R$ %.2f\n", nomes[i], qtd[i], total[i]);
    return 0;
}
