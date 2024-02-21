#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    float d = (pow(a+b,2) + pow(b+c, 2)) / 2;

    printf("D = %.1f", d);

    return 0;

}