#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    scanf("%d", &opcao);
    size_t tam;
    scanf("%zu", &tam);
    int *memoria = (int *)malloc(tam * sizeof(int));
    if (opcao == 1) {
        size_t pos;
        scanf("%zu", &pos);
        if (pos < tam) {
            printf("%d\n", memoria[pos]);
        }
    } else if (opcao == 2) {
        size_t pos;
        int val;
        scanf("%zu %d", &pos, &val);
        if (pos < tam) {
            memoria[pos] = val;
        }
    }
    free(memoria);
    return 0;
}


