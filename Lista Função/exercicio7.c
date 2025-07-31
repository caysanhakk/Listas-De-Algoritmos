#include <stdio.h>

float celsius(float tempC) {
    return (tempC * 1.8) + 32;
}

int main() {
    float c;
    scanf("%f", &c);
    printf("F: %.2f\n", celsius(c));
    return 0;
}

