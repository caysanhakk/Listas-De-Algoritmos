#include <stdio.h>

void piramide(int altura) {
    int i, espacos, asteriscos;
    for (i = 1; i <= altura; i++) {
        espacos = altura - i;
        asteriscos = 2 * i - 1;
        for (int e = 0; e < espacos; e++) {
            printf(" ");
        }
        for (int a = 0; a < asteriscos; a++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int h;
    scanf("%d", &h);
    piramide(h);
    return 0;
}
