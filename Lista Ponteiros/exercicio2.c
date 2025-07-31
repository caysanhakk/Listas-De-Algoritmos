#include <stdio.h>

int main() {
    int a = 10, b = 20;

    if (&a > &b)
        printf("a tem o maior endereco: %p\n", (void*)&a);
    else
        printf("b tem o maior endereco: %p\n", (void*)&b);

    return 0;
}