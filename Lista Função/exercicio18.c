#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++)
        resultado *= base;
    return resultado;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", potencia(x, y));
    return 0;
}
