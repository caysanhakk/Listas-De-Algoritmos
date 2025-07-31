#include <stdio.h>

void converter(int total) {
    int h = total / 3600;
    int m = (total % 3600) / 60;
    int s = total % 60;
    printf("%d:%d:%d\n", h, m, s);
}

int main() {
    int tempo;
    scanf("%d", &tempo);
    converter(tempo);
    return 0;
}
