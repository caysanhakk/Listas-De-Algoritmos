#include <stdio.h>

int somar_entre(int n1, int n2) {
    int total = 0;
    for (int i = n1 + 1; i < n2; i++)
        total += i;
    return total;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b)
        printf("%d\n", somar_entre(a, b));
    else
        printf("%d\n", somar_entre(b, a));
    return 0;
}
