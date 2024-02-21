#include <stdio.h>

// Esse programa transforma Km em m

int main (){
    float kMetros;

    printf("Digite o valor em KM: ");
    scanf("%f", &kMetros);

    float metros = kMetros * 1000;

    printf(" %.1f Km equivalem a %.1f m.", kMetros, metros);

    return 0;

}