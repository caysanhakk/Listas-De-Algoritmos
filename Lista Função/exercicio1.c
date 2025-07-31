#include <stdio.h>

int calcularDobro(int x) {
    return x + x;
}

int main() {
    int entrada;
    scanf("%d", &entrada);
    printf("Dobro: %d\n", calcularDobro(entrada));
    return 0;
}
