#include <stdio.h>

int main() {

    int a = 10;
    float b = 3.14;
    char c = 'x';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Antes da modificação:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    *pInt = 20;
    *pFloat = 6.28;
    *pChar = 'z';

    printf("Depois da modificação via ponteiros:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    return 0;
}