#include <stdio.h>

void dobra(int *a, int *b) {
    *a *= 2;
    *b *= 2;
}

int main() {
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);

    dobra(&a, &b);
    int soma = a + b;

    printf("Soma dos dobros: %d\n", soma);
    return 0;
}