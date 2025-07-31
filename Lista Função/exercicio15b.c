#include <stdio.h>

void classificar(int l1, int l2, int l3) {
    if (l1 == l2 && l2 == l3)
        printf("Equilátero\n");
    else if (l1 == l2 || l2 == l3 || l1 == l3)
        printf("Isósceles\n");
    else
        printf("Escaleno\n");
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    classificar(a, b, c);
    return 0;
}
