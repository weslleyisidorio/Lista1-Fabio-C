#include <stdio.h>

#define PI 3.1415

// Esse programa calcula o comprimento de um circunferencia

int main() {
    float raio;

    printf("Digite o valopr do raio da circunferência: ");
    scanf("%f", &raio);

    float comprimento = 2 * PI * raio;

    printf("O comprimento da circunferência de raio %.1f é %.1f", raio, comprimento);

    return 0;


}