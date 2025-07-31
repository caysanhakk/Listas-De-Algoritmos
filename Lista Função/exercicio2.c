#include <stdio.h>

void exibirData(int dia, int mes, int ano) {
    printf("Imprimir: %02d de %02d de %d\n", dia, mes, ano);
}

int main() {
    int dd, mm, aa;
    scanf("%d %d %d", &dd, &mm, &aa);
    exibirData(dd, mm, aa);
    return 0;
}
