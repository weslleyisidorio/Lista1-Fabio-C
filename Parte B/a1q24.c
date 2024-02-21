#include <stdio.h>

//Esse programa transforma metros em centimetros.

int main() {
    float metros;

    printf("Digite o valor em metros a ser convertido: ");
    scanf("%f", &metros);

    float centimetros = metros * 100;

    printf("%.1f metros equeivalem a %.1f centimetros.", metros, centimetros);

    return 0;
}