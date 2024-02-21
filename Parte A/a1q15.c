#include <stdio.h>

//Esse programa calcula a área de um triangulo

int main() {
    float base;
    float altura;

    printf("Entra o valor da base do triângulo: ");
    scanf("%f", &base);
    printf("Entra com o valor da altura do triângulo: ");
    scanf("%f", &altura);

    float areaTri = (base * altura) / 2;

    printf("A área do triangulo de base %.2f e altura %.2f é %.2f", base, altura, areaTri);

    return 0;
}