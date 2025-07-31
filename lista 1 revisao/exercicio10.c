#include <stdio.h>

int main() {
    int matrizDados[5][5];
    int totaisLinha[5] = {0};
    int totaisColuna[5] = {0};
    int l, c;

    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            scanf("%d", &matrizDados[l][c]);
            totaisLinha[l] += matrizDados[l][c];
            totaisColuna[c] += matrizDados[l][c];
        }
    }

    printf("Matriz:\n");
    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            printf("%4d", matrizDados[l][c]);
        }
        printf("\n");
    }

    printf("Somas das linhas:\n");
    for (l = 0; l < 5; l++) {
        printf("%d ", totaisLinha[l]);
    }
