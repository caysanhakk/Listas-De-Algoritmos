#include <stdio.h>

int main() {
    int cont = 10;
    do {
        printf("%d\n", cont);
        cont--; 
    } while (cont >= 0);
    printf("FIM!\n");
    return 0;
}
