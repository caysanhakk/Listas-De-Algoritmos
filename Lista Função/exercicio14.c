#include <stdio.h>

void verificar_consumo(float distancia, float litros) {
    float media = distancia / litros;
    if (media < 8)
        printf("Venda o carro!\n");
    else if (media <= 14)
        printf("Econômico!\n");
    else
        printf("Super econômico!\n");
}

int main() {
    float d, l;
    scanf("%f %f", &d, &l);
    verificar_consumo(d, l);
    return 0;
}
