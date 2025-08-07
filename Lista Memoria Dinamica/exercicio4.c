#i#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int *vetor = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        vetor[i] = i + 1;
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
    free(vetor);
    return 0;
}


