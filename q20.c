#include <stdio.h>

int main() {
    int i;
    printf("Decimal\tHexadecimal\tCaractere\n");
    for (i = 32; i <= 126; i++) {
        printf("%d\t%X\t\t%c\n", i, i, i);
    }
    return 0;
}
