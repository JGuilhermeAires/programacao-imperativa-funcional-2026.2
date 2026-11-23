/* Questao 18 - Potencia com recursao */
#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;

    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente nao pode ser negativo.\n");
        return 0;
    }

    printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));
    return 0;
}

long potencia(int base, int expoente) {
    /* CASO BASE: qualquer numero elevado a 0 e 1 */
    if (expoente == 0)
        return 1;
    /* PASSO RECURSIVO: base^expoente = base * base^(expoente-1) */
    return (long)base * potencia(base, expoente - 1);
}
