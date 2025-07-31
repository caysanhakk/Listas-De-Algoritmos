#include <stdio.h>

int main() {
    int matriz[4][5];
    int menor, linha, coluna;

    // Leitura da matriz
    printf("Digite os elementos da matriz 4x5:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];
    linha = 0;
    coluna = 0;

    // Busca pelo menor valor
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\nMenor valor: %d\n", menor);
    printf("Posição: Linha %d, Coluna %d\n", linha, coluna);

    return 0;
}
