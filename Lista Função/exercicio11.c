#include <stdio.h>

float aritmetica(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

float ponderada(float a, float b, float c) {
    return (a*3 + b*2 + c*5) / 10.0;
}

int main() {
    float nota1, nota2, nota3;
    char modo;
    scanf("%f %f %f %c", &nota1, &nota2, &nota3, &modo);
    if (modo == 'A') printf("Media: %.2f\n", aritmetica(nota1, nota2, nota3));
    else printf("Media: %.2f\n", ponderada(nota1, nota2, nota3));
    return 0;
}
