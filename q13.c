#include <stdio.h>

int main() {
    float L, B, H;
    float areaQuadrado, areaRetangulo, areaTriangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &L);
    printf("Digite a base do retangulo: ");
    scanf("%f", &B);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &H);

    areaQuadrado = L * L;
    areaRetangulo = B * H;
    areaTriangulo = (B * H) / 2;

    printf("Area do quadrado: %.2f\n", areaQuadrado);
    printf("Area do retangulo: %.2f\n", areaRetangulo);
    printf("Area do triangulo: %.2f\n", areaTriangulo);

    return 0;
}