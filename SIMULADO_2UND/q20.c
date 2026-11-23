/* Questao 20 - Duracao de sessoes (estruturas passadas por valor) */
#include <stdio.h>

typedef struct {
    int hora, minuto;
} Horario;

int duracao(Horario ini, Horario fim);

int main(void) {
    Horario ini, fim;
    int min;

    printf("Inicio da sessao (hh mm): ");
    scanf("%d %d", &ini.hora, &ini.minuto);
    printf("Fim da sessao (hh mm): ");
    scanf("%d %d", &fim.hora, &fim.minuto);

    min = duracao(ini, fim);
    if (min < 0) {
        printf("Erro: o fim deve ser depois do inicio (mesmo dia).\n");
        return 0;
    }

    printf("Duracao: %d minutos\n", min);
    printf("Duracao: %dh%02dmin\n", min / 60, min % 60);
    return 0;
}

int duracao(Horario ini, Horario fim) {
    return (fim.hora * 60 + fim.minuto) - (ini.hora * 60 + ini.minuto);
}
