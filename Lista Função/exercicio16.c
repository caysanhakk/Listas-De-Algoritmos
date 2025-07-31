#include <stdio.h>

void linha(int qtd) {
    while (qtd--) {
        printf("=");
    }
    printf("\n");
}

int main() {
    int x;
    scanf("%d", &x);
    linha(x);
    return 0;
}
