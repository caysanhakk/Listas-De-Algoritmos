#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int num, tamanho = 0;

    while (1) {
        scanf("%d", &num);
        if (num < 0) break;
        vetor = (int *)realloc(vetor, (tamanho + 1) * sizeof(int));
        vetor[tamanho++] = num;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    free(vetor);
    return 0;
}



