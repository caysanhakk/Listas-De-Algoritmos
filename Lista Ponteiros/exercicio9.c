#include <stdio.h>

int main() {
    float mat[3][3];
    float *p = &mat[0][0];

    for (int i = 0; i < 9; i++)
        printf("Endereco %d = %p\n", i, (void*)(p + i));

    return 0;
}