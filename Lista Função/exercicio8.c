#include <stdio.h>
#include <math.h>

float calcHipotenusa(float x, float y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
    float lado1, lado2;
    scanf("%f %f", &lado1, &lado2);
    printf("Hipotenusa: %.2f\n", calcHipotenusa(lado1, lado2));
    return 0;
}
