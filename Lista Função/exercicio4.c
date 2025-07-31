#include <stdio.h>
#include <math.h>

int quadradoPerfeito(int n) {
    int raiz = sqrt(n);
    return raiz * raiz == n;
}

int main() {
    int valor;
    scanf("%d", &valor);
    printf("%d\n", quadradoPerfeito(valor));
    return 0;
}
