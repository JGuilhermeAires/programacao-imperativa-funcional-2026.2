#include <stdio.h>

int main()
{
    int segundos, horas, minutos, segundosRestantes;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundosRestantes = segundos % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s).\n",
           horas, minutos, segundosRestantes);

    return 0;
}