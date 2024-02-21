#include <stdio.h>

//Esse programa inverte  a ordem dos números.

int main() {
    float a;
    float b;

    printf("Digite dois números separados por 'Enter':");
    scanf("%f", &a);
    scanf("%f", &b);

    printf(" %.1f, %.1f invertido é %.1f, %.1f.", a, b, b, a);

    return 0;
}