#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++)
        fat *= i;
    return fat;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", fatorial(num));
    return 0;
}
