#include <stdio.h>
#include <math.h>

float volume(float r, float h) {
    return M_PI * r * r * h;
}

int main() {
    float raio, altura;
    scanf("%f %f", &raio, &altura);
    printf("Volume: %.2f\n", volume(raio, altura));
    return 0;
}
