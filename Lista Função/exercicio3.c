#include <stdio.h>

int sinal(int valor) {
    if (valor > 0) return 1;
    if (valor == 0) return 0;
    return -1;
}

int main() {
    int entrada;
    scanf("%d", &entrada);
    printf("%d\n", sinal(entrada));
    return 0;
}
