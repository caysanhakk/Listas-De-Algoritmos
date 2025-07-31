#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    if (A == 0) return -1;
    float d = B * B - 4 * A * C;
    if (d < 0) return 0;
    if (d == 0) {
        *X1 = -B / (2 * A);
        return 1;
    }
    float sqrt_d = sqrt(d);
    *X1 = (-B + sqrt_d) / (2 * A);
    *X2 = (-B - sqrt_d) / (2 * A);
    return 2;
}

int main() {
    float r1, r2;
    int qtd = raizes(1, 2, 1, &r1, &r2);
    printf("Qtd raízes: %d\n", qtd);
    if (qtd == 1) printf("Raiz: %.2f\n", r1);
    if (qtd == 2) printf("Raízes: %.2f e %.2f\n", r1, r2);
    return 0;
}

