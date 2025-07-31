#include <stdio.h>

float elevar(float base, int expoente) {
    float resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

void potencia(float x, float y, float *res1, float *res2) {
    *res1 = elevar(x, (int)y);
    *res2 = elevar(x, 2) + elevar(y, 2);
}

int main() {
    float x = 4, y = 2, p1, p2;
    potencia(x, y, &p1, &p2);
    printf("x^y: %.2f, x²+y²: %.2f\n", p1, p2);
    return 0;
}


