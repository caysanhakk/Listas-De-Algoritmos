#include <stdio.h>
#include <string.h>

int main() {
    char textoUsuario[150];
    int posicao;

    printf("Informe a frase: ");
    fgets(textoUsuario, 150, stdin);

    if (textoUsuario[strlen(textoUsuario) - 1] == '\n') {
        textoUsuario[strlen(textoUsuario) - 1] = '\0';
    }

    for (posicao = strlen(textoUsuario) - 1; posicao >= 0; posicao--) {
        printf("%c", textoUsuario[posicao]);
    }

    printf("\n");
    return 0;
}
