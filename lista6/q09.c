/* Questao 09 - Notas por aluno e por prova */
#include <stdio.h>

#define ALUNOS 5
#define PROVAS 4

void lerNotas(float m[][PROVAS], int alunos);
float mediaAluno(float m[][PROVAS], int aluno);
float mediaProva(float m[][PROVAS], int alunos, int prova);

int main(void) {
    float notas[ALUNOS][PROVAS];
    int i, j;

    lerNotas(notas, ALUNOS);

    printf("\nMedia de cada aluno:\n");
    for (i = 0; i < ALUNOS; i++)
        printf("Aluno %d: %.2f\n", i + 1, mediaAluno(notas, i));

    printf("\nMedia de cada prova:\n");
    for (j = 0; j < PROVAS; j++)
        printf("Prova %d: %.2f\n", j + 1, mediaProva(notas, ALUNOS, j));
    return 0;
}

void lerNotas(float m[][PROVAS], int alunos) {
    int i, j;
    for (i = 0; i < alunos; i++)
        for (j = 0; j < PROVAS; j++) {
            printf("Nota do aluno %d na prova %d: ", i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }
}

float mediaAluno(float m[][PROVAS], int aluno) {
    float soma = 0;
    int j;
    for (j = 0; j < PROVAS; j++)
        soma += m[aluno][j];
    return soma / PROVAS;
}

float mediaProva(float m[][PROVAS], int alunos, int prova) {
    float soma = 0;
    int i;
    for (i = 0; i < alunos; i++)
        soma += m[i][prova];
    return soma / alunos;
}
