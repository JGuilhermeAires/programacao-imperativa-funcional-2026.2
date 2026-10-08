#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    double p, area;
    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Semiperimetro: %.3f\n", p);
    printf("Area do triangulo: %.3f\n", area);
    return 0;
}