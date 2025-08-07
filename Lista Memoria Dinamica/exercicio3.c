#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *vetor = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    int pares = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) pares++;
    }
    printf("Pares: %d\n", pares);
    free(vetor);
    return 0;
}


