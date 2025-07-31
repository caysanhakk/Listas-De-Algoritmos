#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume) {
    *area = 4.0 * M_PI * pow(R, 2);
    *volume = (4.0 / 3.0) * M_PI * pow(R, 3);
}

int main() {
    float raio = 3.5, ar, vol;
    calc_esfera(raio, &ar, &vol);
    printf("Área: %.2f, Volume: %.2f\n", ar, vol);
    return 0;
}

