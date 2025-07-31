#include <stdio.h>

void compara(int *a, int *b) {
    if (a > b)
        printf("Endereco de a eh maior: %p\n", (void*)a);
    else
        printf("Endereco de b eh maior: %p\n", (void*)b);
}

int main() {
    int x, y;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);

    compara(&x, &y);
    return 0;
}