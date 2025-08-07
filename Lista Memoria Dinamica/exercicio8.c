#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int *)calloc(1500, sizeof(int));
    int todos_zero = 1;
    for (int i = 0; i < 1500; i++) {
        if (vetor[i] != 0) {
            todos_zero = 0;
            break;
        }
    }
    printf("%s\n", todos_zero ? "Sim" : "Não");
    for (int i = 0; i < 1500; i++) {
        vetor[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    for (int i = 1490; i < 1500; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    free(vetor);
    return 0;
}


