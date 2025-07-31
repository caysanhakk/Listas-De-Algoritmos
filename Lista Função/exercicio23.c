#include <stdio.h>

void desenharLado(int tam) {
    int x, y;
    for (x = 1; x <= tam; x++) {
        for (y = 1; y <= x; y++) {
            printf("*");
        }
        printf("\n");
    }
    for (x = tam - 1; x >= 1; x--) {
        for (y = 1; y <= x; y++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int entrada;
    scanf("%d", &entrada);
    desenharLado(entrada);
    return 0;
}
