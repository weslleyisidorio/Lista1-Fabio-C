#include <stdio.h>

// Esse progrma converte de Celsius para Fahrenheit

int main() {
    float celcius;

    printf("Digite o valor dos graus em Celsius: ");
    scanf("%f", &celcius);

    float fahrenheit = (9 * celcius + 160) / 5;
    
    printf("%.1f ºC equivale a %.1f ºF", celcius, fahrenheit);

    return 0;
}