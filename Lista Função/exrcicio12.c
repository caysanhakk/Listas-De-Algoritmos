#include <stdio.h>

int soma_digitos(int n) {
    if (n < 1) {
        printf("Número inválido\n");
        return -1;
    }
    int total = 0;
    for (; n > 0; n /= 10)
        total += n % 10;
    return total;
}

int main() {
    int num;
    scanf("%d", &num);
    int s = soma_digitos(num);
    if (s != -1)
        printf("Resultado: %d\n", s);
    return 0;
}
