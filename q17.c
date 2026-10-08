#include <stdio.h>

int main() {
    float nota, soma = 0.0;
    float maior = 0.0, menor = 10.0, media;
    int quantidade = 0;

    do {
        printf("Digite a nota (-1 para encerrar): ");
        scanf("%f", &nota);
        if (nota >= 0.0 && nota <= 10.0) {
            soma += nota;
            quantidade++;
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        }
    } while (nota != -1.0);

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("\nTotal de alunos: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media da turma: %.2f\n", media);
    } else {
        printf("Nenhuma nota foi informada.\n");
    }

    return 0;
}
