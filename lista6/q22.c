/* Questao 22 - Ponto e retangulo (estruturas aninhadas) */
#include <stdio.h>

typedef struct { float x, y; } Ponto;
typedef struct { Ponto inf_esq; Ponto sup_dir; } Retangulo;

float area(Retangulo r);
float perimetro(Retangulo r);
int contemPonto(Retangulo r, Ponto p);

int main(void) {
    Retangulo r1, r2;
    Ponto p;

    printf("Canto inferior esquerdo (x y): ");
    scanf("%f %f", &r1.inf_esq.x, &r1.inf_esq.y);
    printf("Canto superior direito (x y): ");
    scanf("%f %f", &r1.sup_dir.x, &r1.sup_dir.y);
    printf("Ponto (x y): ");
    scanf("%f %f", &p.x, &p.y);

    printf("Area = %.2f\n", area(r1));
    printf("Perimetro = %.2f\n", perimetro(r1));
    if (contemPonto(r1, p))
        printf("O ponto (%.2f, %.2f) esta DENTRO do retangulo.\n", p.x, p.y);
    else
        printf("O ponto (%.2f, %.2f) esta FORA do retangulo.\n", p.x, p.y);

    r2 = r1;       /* copia da estrutura inteira (inclusive as estruturas aninhadas) com uma atribuicao */
    printf("Copia r2: (%.2f, %.2f) - (%.2f, %.2f)\n",
           r2.inf_esq.x, r2.inf_esq.y, r2.sup_dir.x, r2.sup_dir.y);
    return 0;
}

float area(Retangulo r) {
    return (r.sup_dir.x - r.inf_esq.x) * (r.sup_dir.y - r.inf_esq.y);
}

float perimetro(Retangulo r) {
    return 2 * ((r.sup_dir.x - r.inf_esq.x) + (r.sup_dir.y - r.inf_esq.y));
}

int contemPonto(Retangulo r, Ponto p) {
    return p.x >= r.inf_esq.x && p.x <= r.sup_dir.x &&
           p.y >= r.inf_esq.y && p.y <= r.sup_dir.y;
}
