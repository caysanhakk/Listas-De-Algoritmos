#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtd, valor;
    scanf("%d", &qtd);
    double *vetor = (double *)malloc(qtd * sizeof(double));
    for (int i = 0; i < 10 && i < qtd; i++) {
        vetor[i] = rand() % 100;
    }
    for (int i = 0; i < 10 && i < qtd; i++) {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");
    free(vetor);
    return 0;
}




