#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[200];
    int contadorLetras[26] = {0};
    int i;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    for (i = 0; texto[i] != '\0'; i++) {
        if (isalpha(texto[i])) {
            contadorLetras[tolower(texto[i]) - 'a']++;
        }
    }

    printf("Letras repetidas:\n");
    for (i = 0; i < 26; i++) {
        if (contadorLetras[i] > 1) {
            printf("%c aparece %d vezes\n", i + 'a', contadorLetras[i]);
        }
    }

    return 0;
}
