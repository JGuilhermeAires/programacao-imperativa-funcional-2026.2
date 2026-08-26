#include <stdio.h>

int main()
{
    printf("%-10s %4s\n", "ALUNO(A)", "NOTA");
    printf("%-10s %4s\n", "=========", "=====");
    printf("%-10s %4.1f\n", "ALINE", 9.0);
    printf("%-10s %4.1f\n", "MÁRIO", 10.0);
    printf("%-10s %4.1f\n", "SÉRGIO", 4.5);
    printf("%-10s %4.1f\n", "SHIRLEY", 7.0);

    return 0;
}