#include <stdio.h>
#include <math.h>

#define PI 3.14

// Esse programa calcula o volume de uma esfera

int main() {
    float raio;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f",&raio);

    float volume = (4 * PI * pow(raio, 3)) / 3;

    printf("A esfera com raio %.1f tem volume %.1f", raio, volume);

    return 0;
}