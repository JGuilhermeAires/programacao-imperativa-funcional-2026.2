/* Questao 18 - Cadastro de funcionarios (vetor de estruturas) */
#include <stdio.h>

#define QTD 4

typedef struct {
    char nome[50];
    int codigo;
    float salario;
} Funcionario;

int main(void) {
    Funcionario f[QTD];
    int i, maior = 0;
    float soma = 0, media;

    for (i = 0; i < QTD; i++) {
        printf("Funcionario %d:\n", i + 1);
        printf("  Nome: ");
        scanf(" %49[^\n]", f[i].nome);
        printf("  Codigo: ");
        scanf("%d", &f[i].codigo);
        printf("  Salario: ");
        scanf("%f", &f[i].salario);

        soma += f[i].salario;
        if (f[i].salario > f[maior].salario)
            maior = i;
    }
    media = soma / QTD;

    printf("\nMaior salario: %s (codigo %d) - R$ %.2f\n",
           f[maior].nome, f[maior].codigo, f[maior].salario);
    printf("Media salarial: R$ %.2f\n", media);

    printf("\nFuncionarios com salario abaixo da media (com reajuste de 10%%):\n");
    for (i = 0; i < QTD; i++)
        if (f[i].salario < media)
            printf("%s: R$ %.2f -> R$ %.2f\n", f[i].nome, f[i].salario, f[i].salario * 1.10f);
    return 0;
}
