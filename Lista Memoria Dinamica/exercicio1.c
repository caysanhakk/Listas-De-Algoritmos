#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    free(vetor);
    return 0;
}

