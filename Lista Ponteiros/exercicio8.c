#include <stdio.h>

int main() {
    float vet[10];
    float *p = vet;

    for (int i = 0; i < 10; i++)
        printf("Endereco de vet[%d] = %p\n", i, (void*)(p + i));

    return 0;
}