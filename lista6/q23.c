/* Questao 23 - Estacionamento */
#include <stdio.h>

#define TARIFA 5.0f

typedef struct { int hora, minuto; } Hora;
typedef struct {
    char placa[10];
    Hora entrada, saida;
} Veiculo;

int minutosPermanencia(Hora entrada, Hora saida);

int main(void) {
    Veiculo v;
    int minutos, horasCobradas;

    printf("Placa: ");
    scanf("%9s", v.placa);
    printf("Hora de entrada (hh mm): ");
    scanf("%d %d", &v.entrada.hora, &v.entrada.minuto);
    printf("Hora de saida (hh mm): ");
    scanf("%d %d", &v.saida.hora, &v.saida.minuto);

    minutos = minutosPermanencia(v.entrada, v.saida);
    horasCobradas = (minutos + 59) / 60;            /* fracao de hora conta como hora cheia */

    printf("\nVeiculo %s\n", v.placa);
    printf("Permanencia: %d h %d min\n", minutos / 60, minutos % 60);
    printf("Horas cobradas: %d\n", horasCobradas);
    printf("Valor a pagar: R$ %.2f\n", horasCobradas * TARIFA);
    return 0;
}

/* Se a saida for menor que a entrada, considera-se que o veiculo saiu no dia seguinte */
int minutosPermanencia(Hora entrada, Hora saida) {
    int e = entrada.hora * 60 + entrada.minuto;
    int s = saida.hora * 60 + saida.minuto;
    if (s < e)
        s += 24 * 60;
    return s - e;
}
