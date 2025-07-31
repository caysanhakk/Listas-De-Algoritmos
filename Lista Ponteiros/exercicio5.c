#include <stdio.h>

void maiorMenor(int a, int b, int *maior, int *menor) {
    if (a > b) {
        *maior = a;
        *menor = b;
    } else {
        *maior = b;
        *menor = a;
    }
}

int main() {
    int x, y, maior, menor;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);

    maiorMenor(x, y, &maior, &menor);
    printf("Maior: %d, Menor: %d\n", maior, menor);

    return 0;
}