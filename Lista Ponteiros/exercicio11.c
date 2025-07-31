#include <stdio.h>

int main() {
    int vet[5], *p = vet;

    printf("Digite 5 inteiros:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", p + i);

    for (int i = 0; i < 5; i++)
        printf("Valor: %d, Endereco: %p\n", *(p + i), (void*)(p + i));

    return 0;
}