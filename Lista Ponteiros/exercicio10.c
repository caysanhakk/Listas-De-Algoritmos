#include <stdio.h>

int main() {
    int vet[5];

    printf("Digite 5 inteiros:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", vet + i);

    for (int i = 0; i < 5; i++)
        printf("Dobro: %d\n", *(vet + i) * 2);

    return 0;
}