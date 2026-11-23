/* Questao 24 - Controle de dieta */
#include <stdio.h>

#define QTD 5

typedef struct {
    char nome[40];
    float peso;        /* gramas */
    float calorias;
} Dieta;

int main(void) {
    Dieta refeicao[QTD];
    int i, maisCalorico = 0;
    float total = 0;

    for (i = 0; i < QTD; i++) {
        printf("Alimento %d:\n", i + 1);
        printf("  Nome: ");
        scanf(" %39[^\n]", refeicao[i].nome);
        printf("  Peso da porcao (g): ");
        scanf("%f", &refeicao[i].peso);
        printf("  Calorias: ");
        scanf("%f", &refeicao[i].calorias);

        total += refeicao[i].calorias;
        if (refeicao[i].calorias > refeicao[maisCalorico].calorias)
            maisCalorico = i;
    }

    printf("\n%-20s %10s %10s\n", "Alimento", "Peso (g)", "Calorias");
    for (i = 0; i < QTD; i++)
        printf("%-20s %10.1f %10.1f\n", refeicao[i].nome, refeicao[i].peso, refeicao[i].calorias);

    printf("\nTotal de calorias da refeicao: %.1f\n", total);
    printf("Alimento mais calorico: %s (%.1f cal)\n",
           refeicao[maisCalorico].nome, refeicao[maisCalorico].calorias);
    return 0;
}
