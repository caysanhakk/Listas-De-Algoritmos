#include <stdio.h>

float operacao(float n1, float n2, char simbolo) {
    if (simbolo == '+') return n1 + n2;
    else if (simbolo == '-') return n1 - n2;
    else if (simbolo == '*') return n1 * n2;
    else if (simbolo == '/' && n2 != 0) return n1 / n2;
    else return 0;
}

int main() {
    float x, y;
    char c;
    scanf("%f %f %c", &x, &y, &c);
    printf("Resultado = %.2f\n", operacao(x, y, c));
    return 0;
}
