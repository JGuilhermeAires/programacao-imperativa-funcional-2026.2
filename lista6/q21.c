/* Questao 21 - Soma de tempos */
#include <stdio.h>

typedef struct {
    int horas, minutos, segundos;
} Tempo;

Tempo somaTempo(Tempo a, Tempo b);

int main(void) {
    Tempo t1, t2, r;

    printf("Primeiro tempo (horas minutos segundos): ");
    scanf("%d %d %d", &t1.horas, &t1.minutos, &t1.segundos);
    printf("Segundo tempo (horas minutos segundos): ");
    scanf("%d %d %d", &t2.horas, &t2.minutos, &t2.segundos);

    r = somaTempo(t1, t2);
    printf("Soma = %02d:%02d:%02d\n", r.horas, r.minutos, r.segundos);
    return 0;
}

Tempo somaTempo(Tempo a, Tempo b) {
    Tempo r;
    r.segundos = a.segundos + b.segundos;
    r.minutos  = a.minutos + b.minutos;
    r.horas    = a.horas + b.horas;

    r.minutos += r.segundos / 60;     /* 60 segundos = 1 minuto */
    r.segundos %= 60;
    r.horas += r.minutos / 60;        /* 60 minutos = 1 hora */
    r.minutos %= 60;
    return r;
}
