#include <stdio.h>

int primo(int x) {
    if (x < 2) return 0;
    for (int i = 2; i < x; i++)
        if (x % i == 0) return 0;
    return 1;
}

int main() {
    int n, qtd = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
        if (primo(i)) qtd++;
    printf("%d\n", qtd);
    return 0;
}
