#include <stdio.h>

int forma_triangulo(int a, int b, int c) {
    return a + b > c && a + c > b && b + c > a;
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (forma_triangulo(x, y, z))
        printf("Forma um triângulo\n");
    else
        printf("Não forma triângulo\n");
    return 0;
}
