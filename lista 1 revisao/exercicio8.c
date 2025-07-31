#include <stdio.h>

int main() {
    int entradaUsuario = 0;
    int listaNumeros[5];
    int indice = 0;
    int maiorNumero = 0;
    int menorNumero = 0;
    int acumulador = 0;
    float resultadoMedia = 0.0;

    printf("<< 5 valores >>\n");

    for (indice = 0; indice < 5; indice++) {
        printf("Entre com o número %d: ", indice + 1);
        scanf("%d", &entradaUsuario);
        listaNumeros[indice] = entradaUsuario;
        acumulador += entradaUsuario;

        if (indice == 0) {
            maiorNumero = entradaUsuario;
            menorNumero = entradaUsuario;
        } else {
            if (entradaUsuario > maiorNumero)
                maiorNumero = entradaUsuario;
            if (entradaUsuario < menorNumero)
                menorNumero = entradaUsuario;
        }
    }

    printf("\nOs números digitados são: ");
    for (indice = 0; indice < 5; indice++) {
        printf("%d ", listaNumeros[indice]);
    }

    resultadoMedia = (float)acumulador / 5.0;

    printf("\nO maior valor é: %d", maiorNumero);
    printf("\nO menor valor é: %d", menorNumero);
    printf("\nA média é: %.1f\n", resultadoMedia);

    return 0;
}
