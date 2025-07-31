#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

int main() {
    Ponto vertices[4];
    printf("Digite as coordenadas de IE (x y): ");
    scanf("%f %f", &vertices[0].x, &vertices[0].y);

    printf("Digite as coordenadas de ID (x y): ");
    scanf("%f %f", &vertices[1].x, &vertices[1].y);

    printf("Digite as coordenadas de SE (x y): ");
    scanf("%f %f", &vertices[2].x, &vertices[2].y);

    printf("Digite as coordenadas de SD (x y): ");
    scanf("%f %f", &vertices[3].x, &vertices[3].y);

    float largura = fabs(vertices[1].x - vertices[0].x);
    float altura = fabs(vertices[2].y - vertices[0].y);
    float area = largura * altura;

    printf("Area do retangulo: %.2f\n", area);
    return 0;
}
