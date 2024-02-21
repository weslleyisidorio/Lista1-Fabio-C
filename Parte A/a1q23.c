#include <stdio.h>

// Esse programa tranforma Kg em gramas.

int main () {
    float kGramas;

    printf("Digite o valor em Kg: ");
    scanf("%f", &kGramas);

    float gramas = kGramas * 1000;

    printf(" %.1f Kg equivalem a %.1f g.", kGramas, gramas);

    return 0;

}