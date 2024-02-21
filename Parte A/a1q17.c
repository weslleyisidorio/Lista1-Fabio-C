#include <stdio.h>

//Essse programa calcula a área de um retângulo

int main() {
    float base;
    float altura;

    printf("Digite o valor da base do retângulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do retângulo: ");
    scanf("%f", &altura);

    float area = base * altura;

    printf("A área do retangulo de base %.1f e lado %.1f é %.1f", base, altura, area);
    return 0;
}