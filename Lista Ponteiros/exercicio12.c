#include <stdio.h>
#include <math.h>

void frac(float num, int *inteiro, float *frac) {
    *inteiro = floor(num);
    *frac = num - floor(num);
}

int main() {
    float n = 8.33, f;
    int i;
    frac(n, &i, &f);
    printf("Inteiro: %d, Frac: %.2f\n", i, f);
    return 0;
}
