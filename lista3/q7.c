#include <stdio.h>

int main() {
    int i;

    // Versão com for
    for (i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }
    printf("\n");

    // Versão com while
    i = 0;
    while (i <= 100) {
        printf("%d\n", i);
        i++;
    }
    printf("\n");

    // Versão com do-while
    i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 100);

    return 0;
}

/* A estrutura mais adequada neste caso é o for, pois sabemos exatamente o início, o fim e o incremento da contagem. Isso deixa o código mais organizado e legível. */