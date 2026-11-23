/* Questao 10 - Area da esfera com #define */
#include <stdio.h>

#define PI 3.14159265f

float area(float r);

int main(void) {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("Area da esfera = %.2f\n", area(raio));
    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}
