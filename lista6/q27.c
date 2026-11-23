/* Questao 27 - Dado generico com union */
#include <stdio.h>

typedef union {
    int i;
    float f;
    char c;
} Valor;

typedef enum { INTEIRO, REAL, CARACTERE } Tipo;

typedef struct {
    Tipo tipo;
    Valor valor;
} Registro;

int main(void) {
    Registro reg[3];
    int i, escolha;

    for (i = 0; i < 3; i++) {
        printf("Registro %d - tipo (0 - INTEIRO, 1 - REAL, 2 - CARACTERE): ", i + 1);
        scanf("%d", &escolha);
        if (escolha < INTEIRO || escolha > CARACTERE) {
            printf("Tipo invalido, tente novamente.\n");
            i--;
            continue;
        }
        reg[i].tipo = (Tipo)escolha;

        printf("Valor: ");
        switch (reg[i].tipo) {
            case INTEIRO:   scanf("%d", &reg[i].valor.i);  break;
            case REAL:      scanf("%f", &reg[i].valor.f);  break;
            case CARACTERE: scanf(" %c", &reg[i].valor.c); break;
        }
    }

    printf("\nRegistros:\n");
    for (i = 0; i < 3; i++) {
        switch (reg[i].tipo) {                 /* le sempre o campo correspondente ao tipo */
            case INTEIRO:   printf("%d: INTEIRO   = %d\n",   i + 1, reg[i].valor.i); break;
            case REAL:      printf("%d: REAL      = %.2f\n", i + 1, reg[i].valor.f); break;
            case CARACTERE: printf("%d: CARACTERE = %c\n",   i + 1, reg[i].valor.c); break;
        }
    }

    printf("\nsizeof(Valor) = %zu bytes\n", sizeof(Valor));
    /* Por que esse tamanho? Em uma union todos os membros compartilham a MESMA
       area de memoria, entao a union ocupa o espaco do seu MAIOR membro:
       int e float ocupam 4 bytes (na maioria dos sistemas) e char ocupa 1,
       logo sizeof(Valor) = 4. Diferente de uma struct (que soma os campos),
       so um membro da union e valido por vez - por isso o campo "tipo" em
       Registro indica qual deles deve ser lido. */
    return 0;
}
