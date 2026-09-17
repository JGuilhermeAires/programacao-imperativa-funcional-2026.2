#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int duracao;
    int totalSegundos;
    int horaFinal, minutoFinal, segundoFinal;

    printf("Digite o horario de inicio (horas minutos segundos): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao);

    totalSegundos = horas * 3600 + minutos * 60 + segundos + duracao;
    horaFinal = (totalSegundos / 3600) % 24;
    minutoFinal = (totalSegundos % 3600) / 60;
    segundoFinal = totalSegundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", horaFinal, minutoFinal, segundoFinal);

    return 0;
}
