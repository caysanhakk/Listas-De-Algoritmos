#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
    }
    int tam;
    scanf("%d", &tam);
    int *gerados = (int *)malloc(tam * sizeof(int));
    for (int i = 0; i < tam; i++) {
        scanf("%d", &gerados[i]);
    }
    int acertos = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < tam; j++) {
            if (numeros[i] == gerados[j]) {
                acertos++;
                break;
            }
        }
    }
    printf("Acertos: %d\n", acertos);
    free(numeros);
    free(gerados);
    return 0;
}


