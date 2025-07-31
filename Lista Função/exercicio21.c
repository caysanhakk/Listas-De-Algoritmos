#include <stdio.h>

void exclamacoes(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++)
            printf("!");
        printf("\n");
    }
}

int main() {
    int x;
    scanf("%d", &x);
    exclamacoes(x);
    return 0;
}
