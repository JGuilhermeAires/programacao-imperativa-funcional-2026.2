#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite os tres angulos do triangulo: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A > 0 && B > 0 && C > 0 && A + B + C == 180) {

        if (A == 90 || B == 90 || C == 90) {
            printf("Triangulo Retangulo\n");
        }
        else if (A > 90 || B > 90 || C > 90) {
            printf("Triangulo Obtusangulo\n");
        }
        else {
            printf("Triangulo Acutangulo\n");
        }

    } else {
        printf("Angulos invalidos! A soma deve ser igual a 180 graus.\n");
    }

    return 0;
}