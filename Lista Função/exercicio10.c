#include <stdio.h>

int maximo(int n1, int n2) {
    if (n1 >= n2) return n1;
    return n2;
}

int main() {
    int v1, v2;
    scanf("%d %d", &v1, &v2);
    printf("Maior: %d\n", maximo(v1, v2));
    return 0;
}
