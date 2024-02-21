#include <stdio.h>

//Esse programa calcula uma equação linear:

int main() {
    float a, b, c, d, e, f;

    printf("Digite o valor de A :");
    scanf("%f",&a);
    printf("Digite o valor de B :");
    scanf("%f",&b);
    printf("Digite o valor de C :");
    scanf("%f",&c);
    printf("Digite o valor de D :");
    scanf("%f",&d);
    printf("Digite o valor de E :");
    scanf("%f",&e);
    printf("Digite o valor de F :");
    scanf("%f",&f);

    float x = (c*e - b*f) / (a*e - b*d);
    float y = (a*f - c*d) / (a*e - b*d);

    printf("X = %.1f e Y = %.1f", x, y);

    return 0;
}