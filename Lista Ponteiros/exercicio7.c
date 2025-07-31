#include <stdio.h>

void somaEArmazena(int *a, int b) {
    *a = *a + b;
}

int main() {
    int x, y;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);

    somaEArmazena(&x, y);

    printf("x (com a soma): %d, y = %d\n", x, y);
    return 0;
}